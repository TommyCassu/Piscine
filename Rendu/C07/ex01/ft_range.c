/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:32:26 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/15 16:32:26 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;
	int	size;

	i = 0;
	j = min;
	size = max - min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (0);
	while (i < size)
	{
		tab[i] = j;
		printf("%c", tab[i]);
		i++;
		j++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;

	min = 2;
	max = 8;
	ft_range(min, max);
	return (0);
}
