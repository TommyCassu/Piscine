/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:00:51 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/10 21:50:16 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;

	lnbr = nbr;
	if (ft_verif_base(base) < 2)
		return ;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr *= -1;
	}
	if (lnbr > ft_strlen(base) - 1)
	{
		ft_putnbr_base(lnbr / ft_strlen(base), base);
		ft_putchar(base[lnbr % ft_strlen(base)]);
	}
	else
		ft_putchar(base[lnbr % ft_strlen(base)]);
}
/*
int	main(void)
{
	int	nbr;
	char	base[] = "0123456789ABCDEF";

	nbr = -15;
	ft_putnbr_base(nbr, base);
}
*/
