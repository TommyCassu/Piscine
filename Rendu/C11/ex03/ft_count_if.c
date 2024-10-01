/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:42:28 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/25 15:10:35 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char**tab, int lenght, (int)(*f)(char*))
{
	int	i;
	int	result;
	int	count;

	count = 0;
	result = 0;
	i = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
