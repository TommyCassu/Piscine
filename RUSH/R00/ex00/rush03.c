/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotudela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:49:50 by jotudela          #+#    #+#             */
/*   Updated: 2024/09/07 13:50:27 by jotudela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	extremite(int largueur, int x)
{
	while (largueur <= x)
	{
		if (largueur == 1)
			ft_putchar('A');
		else if (largueur == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		largueur++;
	}
}

void	contour(int largueur, int x)
{
	while (largueur <= x)
	{
		if (largueur == 1)
			ft_putchar('B');
		else if (largueur == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		largueur++;
	}
}

void	rush(int x, int y)
{
	int	largeur;
	int	longueur;

	if (x < 1 || y < 1)
		return ;
	longueur = 1;
	while (longueur <= y)
	{
		largeur = 1;
		if (longueur == 1 || longueur == y)
		{
			extremite(largeur, x);
			ft_putchar('\n');
			longueur++;
		}
		else
		{
			contour(largeur, x);
			ft_putchar('\n');
			longueur++;
		}
	}
}
