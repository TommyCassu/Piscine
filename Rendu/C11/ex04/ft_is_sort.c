/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:11:11 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/25 16:17:17 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < lenght -1)
	{
		result += f(tab[i], tab[i+1]);
		printf("[%d]", result);
		i++;
	}
	if (result == (lenght - 1) || result == -(lenght - 1)
	return (result);
}

int	verif(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}

int	main(void)
{
	int	tab[] = {4, 3, 4, 1};

	printf("%d", ft_is_sort(tab, 4, verif));
}
