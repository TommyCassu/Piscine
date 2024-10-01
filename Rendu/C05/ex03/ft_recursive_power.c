/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:28:54 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/11 17:52:59 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb < 0 && power % 2 == 0)
		nb *= -1;
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int     nb;
	int     nb1;
	int	nb2;
	int	power;

	nb = 2;
	nb1 = 0;
	nb2 = -2;
	power = 4;
	printf("%d \n", ft_recursive_power(nb, power));
	printf("%d \n", ft_recursive_power(nb1, power));
	printf("%d \n", ft_recursive_power(nb2, power));
}
*/
