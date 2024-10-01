/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:43:30 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/07 18:49:59 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    str[] = "TOMMY12";

        printf("%s", ft_strlowcase(str));
}
*/
