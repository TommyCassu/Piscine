/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:04:15 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/15 21:15:08 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (-1);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 2;
	max = 8;
	printf("\n%d\n", ft_ultimate_range(&range, min, max)); 
	while (i <= max - min - 1)
	{
		printf(":%d:", range[i]);
		i++;
	}
	free(range);
	return (0);	
}
