/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slect.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitadros <nitadros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:16:39 by nitadros          #+#    #+#             */
/*   Updated: 2024/09/21 23:08:39 by nitadros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

#define BUFFER_SIZE 4096

char	*read_line_from_file(int fd, char *buffer, int *line_number)
{
	int	i;

	i = 0;
	while (read(fd, &buffer[i], 1) > 0)
	{
		if (buffer[i] == '\n' || i == BUFFER_SIZE - 1)
		{
			buffer[i] = '\0';
			(*line_number)++;
			return (buffer);
		}
		i++;
	}
	if (read(fd, &buffer[i], 1) == 0 && i > 0)
	{
		buffer[i] = '\0';
		(*line_number)++;
		return (buffer);
	}
	return (NULL);
}

char	*search_and_print_line(const char *filename, char *search_str)
{
	int		fd;
	int		line_number;
	char	buffer[BUFFER_SIZE];
	char	*found;

	line_number = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read_line_from_file(fd, buffer, &line_number))
	{
		found = ft_strstr(buffer, search_str);
		if (found)
		{
			close(fd);
			return (found);
		}
	}
	close(fd);
	return (NULL);
}

int	cut_result(const char *filename, char *search_str)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = search_and_print_line(filename, search_str);
	if (tmp == NULL)
		return (0);
	while (tmp[i] != ':')
		i++;
	i++;
	while (tmp[i] == ' ')
		i++;
	while (tmp[i])
	{
		write(1, &tmp[i], 1);
		i++;
	}
	write(1, " ", 1);
	return (1);
}

char	*select_string(char *argv)
{
	int		z;
	int		i;
	char	*buffer;

	z = ft_strlen(argv) - 1;
	if ((z + 1) % 3 != 1)
	{
		if ((z + 1) % 3 == 0)
			z -= 2;
		else if ((z + 1) % 3 == 2)
			z -= 1;
	}
	i = 1;
	buffer = (char *)malloc(sizeof(char) * (z + 3));
	if (argv[0] == '0')
		buffer[0] = '0';
	else
		buffer[0] = '1';
	while (z > 0)
	{
		buffer[i++] = '0';
		z--;
	}
	buffer[i] = ':';
	buffer[i + 1] = '\0';
	return (buffer);
}

char	*select_string_bckp(char *argv)
{
	int		z;
	int		i;
	char	*bckp;

	z = ft_strlen(argv) - 1;
	if ((z + 1) % 3 != 1)
	{
		if ((z + 1) % 3 == 0)
			z -= 2;
		else if ((z + 1) % 3 == 2)
			z -= 1;
	}
	i = 1;
	bckp = (char *)malloc(sizeof(char) * (z + 2));
	if (argv[0] == '0')
		bckp[0] = '0';
	else
		bckp[0] = '1';
	while (z > 0)
	{
		bckp[i++] = '0';
		z--;
	}
	bckp[i] = ' ';
	bckp[i + 1] = '\0';
	return (bckp);
}
