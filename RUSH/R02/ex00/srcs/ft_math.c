/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitadros <nitadros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:54:49 by nitadros          #+#    #+#             */
/*   Updated: 2024/09/21 23:19:24 by nitadros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != 0)
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	*init(char *b, int i, char *str)
{
	b[0] = str[i];
	b[1] = str[i + 1];
	b[2] = ' ';
	b[3] = 0;
	return (b);
}

char	*init2(char *b, int i, char *str)
{
	b[0] = str[i];
	b[1] = '0';
	b[2] = ' ';
	b[3] = 0;
	return (b);
}

t_dict	*get_dict_instance(void)
{
	static t_dict	inf;

	if (!inf.dict)
		inf.dict = "numbers.dict";
	return (&inf);
}
