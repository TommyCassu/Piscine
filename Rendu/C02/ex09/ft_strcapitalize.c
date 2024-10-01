/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:33:36 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/08 18:30:28 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	temp;

	i = 0;
	temp = ' ';
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && ((temp < 97 || temp > 122)
				&& (temp < 48 || temp > 57) && (temp < 65 || temp > 90)))
		{
			temp = str[i];
			str[i] -= 32;
		}
		else
		{
			temp = str[i];
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SAlut, comMent tu vas ?
       	40mots quaRAnte-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}
*/
