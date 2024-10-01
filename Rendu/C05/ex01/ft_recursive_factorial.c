/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:01:05 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/11 13:39:20 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/*
int	main(void)
{
	int	nb;
	int	nb1;
	int	nb2;

	nb = -1;
	nb1 = 0;
	nb2 = 1;
	printf("%d \n", ft_recursive_factorial(nb));
	printf("%d \n", ft_recursive_factorial(nb1));
	printf("%d \n", ft_recursive_factorial(nb2));
}
*/
