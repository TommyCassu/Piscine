/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:21:12 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/09 20:32:56 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	int		i;
	char	*temp;

	i = 0;
	j = 0;
	temp = str;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	else if (ft_strlen(to_find) == 0)
		return (str);
	while (temp[0] != '\0')
	{
		if (to_find[j] == 0)
			return (temp - j);
		else if (temp[0] == to_find[j])
			j++;
		else
			j = 0;
		temp++;
	}
	if (to_find[j] == 0)
		return (temp - j);
	return (0);
}
/*
int	main(void)
{
	char	str[] = "aaabbacqabbabcc";
	char	to_find[] = "cc";

	printf("%s \n",ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}
*/
