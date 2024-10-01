/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitadros <nitadros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:23:30 by nitadros          #+#    #+#             */
/*   Updated: 2024/09/21 23:19:47 by nitadros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	print_result(char *str, int i, int len)
{
	int		index;
	char	b[4];
	char	*res;
	int		k;

	index = len;
	res = select_string(str);
	if (!res)
		res = select_string_bckp(str);
	k = ft_strlen(res) - 1;
	while (str[i])
	{
		if (index % 3 == 0)
			centaine(i, b, str);
		else if (index % 3 == 2)
			dizaine(i, b, str);
		else
		{
			unit(i, b, str);
			llions(res, &k, str, i);
		}
		index--;
		i++;
	}
	free((res));
}

void	centaine(int i, char *b, char *str)
{
	t_dict	*inf;

	inf = get_dict_instance();
	if (str[i] != '0')
	{
		b[0] = str[i];
		b[1] = ' ';
		b[2] = '\0';
		if (!(cut_result(inf->dict, b)))
		{
			b[1] = ':';
			cut_result(inf->dict, b);
		}
		if (!(cut_result(inf->dict, "100:")))
			cut_result(inf->dict, "100 ");
	}
}

void	dizaine(int i, char *b, char *str)
{
	t_dict	*inf;

	inf = get_dict_instance();
	if (str[i] != '0')
	{
		if (str[i] == '1')
		{
			init(b, i, str);
			if (!(cut_result(inf->dict, b)))
			{
				b[2] = ':';
				cut_result(inf->dict, b);
			}
		}
		else
		{
			init2(b, i, str);
			if (!(cut_result(inf->dict, b)))
			{
				b[2] = ':';
				cut_result(inf->dict, b);
			}
		}
	}
}

void	unit(int i, char *b, char *str)
{
	t_dict	*inf;

	inf = get_dict_instance();
	if (str[i - 1] != '1' && str[i] != '0')
	{
		b[0] = str[i];
		b[1] = ' ';
		b[2] = '\0';
		if (!(cut_result(inf->dict, b)))
		{
			b[1] = ':';
			b[2] = '\0';
			cut_result(inf->dict, b);
		}
	}
	else if (i == 0 && str[i] == '0')
	{
		b[0] = str[i];
		b[1] = ' ';
		b[2] = '\0';
		if (!(cut_result(inf->dict, b)))
		{
			b[1] = ':';
			b[2] = '\0';
			cut_result(inf->dict, b);
		}
	}
}

void	llions(char *res, int *k, char *str, int i)
{
	t_dict	*inf;

	inf = get_dict_instance();
	if (*k >= 0 && (str[i] != '0'
			|| str[i - 1] != '0' || str[i - 2] != '0'))
	{
		if (ft_strlen(res) >= 3)
		{
			if (!cut_result(inf->dict, res))
			{
				res[ft_strlen(res) - 1] = ' ';
				if (cut_result(inf->dict, res))
					res[ft_strlen(res) - 1] = '\0';
			}
			*k -= 3;
			if (*k >= 0)
				res[*k] = '\0';
		}
	}
	else
	{
		*k -= 3;
		if (*k >= 0)
			res[*k] = '\0';
	}
}
