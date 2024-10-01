/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitadros <nitadros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:40:41 by nitadros          #+#    #+#             */
/*   Updated: 2024/09/21 22:21:36 by nitadros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	main(int ac, char **av)
{
	int			i;
	int			len;
	int			x;
	t_dict		*inf;

	x = 0;
	i = 0;
	inf = get_dict_instance();
	x = errormessage(ac, av, inf->dict, x);
	len = 0;
	if (av[2])
		inf->dict = av[1];
	if (x == 0)
		return (0);
	act(av, len, i);
	write(1, "\n", 1);
}

void	act(char **av, int len, int i)
{
	if (av[2])
	{
		av[2] = stripe(av[2]);
		len = ft_strlen(av[2]);
		print_result(av[2], i, len);
	}
	else
	{
		av[1] = stripe(av[1]);
		len = ft_strlen(av[1]);
		print_result(av[1], i, len);
	}
}

char	*stripe(char *av)
{
	int	i;

	i = 0;
	while (av[i] == '0' && ft_strlen(av) > 1)
		av++;
	return (av);
}

int	errormessage(int ac, char **av, const char *dict, int x)
{
	if (ac <= 1 || ac > 3)
	{
		write(1, "Please, enter 1 or 2 arguments.\n", 32);
		return (0);
	}
	x = errormessage1(av, dict);
	return (x);
}

int	errormessage1(char **av, const char *dict)
{
	if (av[2])
	{
		if (!ft_str_is_numeric(av[2]))
		{
			write(1, "Please, enter a valid number !\n", 31);
			return (0);
		}
		if (ft_strlen(av[2]) > 39)
		{
			write(1, "Please, enter a number under XXX undecillion.\n", 46);
			return (0);
		}
	}
	else
	{
		if (!ft_str_is_numeric(av[1]) || ft_strlen(av[1]) > 39)
		{
			write(1, "Please, enter a valid number !\n", 31);
			return (0);
		}
	}
	return (errormessage2(av, dict));
}

int	errormessage2(char **av, const char *dict)
{
	int			fd;

	if (av[2])
	{
		dict = av[1];
		fd = open(dict, O_RDONLY);
		if (fd == -1)
		{
			write(1, "Enter a valid dictionnary or leave it empty.\n", 45);
			return (0);
		}
	}
	if (av[2] && (av[2][0] < '0' || av[2][0] > '9'))
	{
		write(1, "Enter a valid number.\n", 22);
		return (0);
	}
	return (1);
}
