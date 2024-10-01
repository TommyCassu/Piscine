/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:16:25 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/25 14:34:33 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	i;
	
	i = 0;
	while (i < lenght)
	{
		tab[i] = f(tab[i]);
		i++;
	}
	return (tab);
}
/*
int	addition(int a)
{
	return (a + 10);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int i;

	ft_map(tab, 4, addition);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
