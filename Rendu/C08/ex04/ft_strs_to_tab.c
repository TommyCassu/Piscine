/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:33:12 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/17 17:01:16 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (tab == NULL)
		return (0);
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*result;

	result = (struct s_stock_str *)malloc
		(sizeof(struct s_stock_str) * (ac + 1));
	if (result == NULL)
	{
		result = malloc(1);
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
/*
int	main(int ac, char **av)
{
	ft_strs_to_tab(ac -1, av +1);
	return (0);
}*/
