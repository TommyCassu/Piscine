/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:07:38 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/17 17:04:00 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			ft_putchar(par[i].str[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
