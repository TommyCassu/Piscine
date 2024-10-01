/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:45:34 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/11 13:40:45 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
}
*/
