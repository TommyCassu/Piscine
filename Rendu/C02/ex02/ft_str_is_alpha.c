/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:34:36 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/08 18:22:56 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "aAzZ";

	printf("%d", ft_str_is_alpha(str));
}
*/
