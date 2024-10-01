/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:13:26 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/11 17:47:51 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	mult;

	i = power;
	mult = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i != 1)
	{
		nb = nb * mult ;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	nb1;
	int	nb2;
	int	power;

	nb = 2;
	nb1 = 0;
	nb2 = -2;
	power = 4;
	printf("%d \n", ft_iterative_power(nb, power));
	printf("%d \n", ft_iterative_power(nb1, power));
	printf("%d \n", ft_iterative_power(nb2, power));
}
*/
