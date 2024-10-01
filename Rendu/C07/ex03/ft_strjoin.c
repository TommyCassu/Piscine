/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:28:59 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/18 15:48:13 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}


char	*ft_strcat(char *src, char *dest)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_getbuffer(int size, char **strs, char *sep)
{
	int		totalsize;
	int		i;
	int		sizechar;
	char	*result;

	i = 0;
	sizechar = 0;
	if (size == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = 0;
		return (result);
	}
	while (i < size)
	{
		sizechar +=ft_strlen(strs[i]);
		i++;
	}
	totalsize = sizechar + (size - 1) * ft_strlen(sep) + 1 ;
	result = malloc(sizeof(char) * totalsize);
	if (result == NULL)
		return (result);
	result[0] = 0;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	result = ft_getbuffer(size, strs, sep);
	if (result == NULL)
		return (result);
	i = 0;
	while (i < size)
	{
		ft_strcat(strs[i], result);
		if (i < size - 1)
			ft_strcat(sep, result);
		i++;
	}
	return (result);
}

int	main(void)
{
	char	sep[] = " t";
	char	*av[] = {"bonjour", "cava", "toto"};
	char *result = ft_strjoin(3, av, sep);
	
	printf("%s", result);
	free(result);
	return (0);
}
