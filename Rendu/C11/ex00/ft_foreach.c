/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:26:59 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/24 00:00:54 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}

void    ft_foreach(int *tab, int lenght, void(*f)(int))
{
	int	i;

	i = 0;
	while (i <= lenght)
	{
		f(tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};

	ft_foreach(tab,  3, ft_putnbr);
}
