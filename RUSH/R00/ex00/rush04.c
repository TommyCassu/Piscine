/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotudela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:52:52 by jotudela          #+#    #+#             */
/*   Updated: 2024/09/07 13:54:04 by jotudela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	extremite(int largueur, int longueur, int x, int y)
{
	while (largueur <= x)
	{
		if (largueur == 1 && longueur == 1)
			ft_putchar('A');
		else if (largueur == 1 && longueur == y)
			ft_putchar('C');
		else if (largueur == x && longueur == 1)
			ft_putchar('C');
		else if (largueur == x && longueur == y)
			ft_putchar('A');
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
			extremite(largeur, longueur, x, y);
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
