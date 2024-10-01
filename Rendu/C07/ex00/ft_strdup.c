/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:41:27 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/15 16:33:18 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = malloc(ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	ft_strcpy(src, str);
	return (str);
}
/*
int	main(void)
{
	char	str[] = "toto";
	int	i;
	char	*result = ft_strdup(str);
	
	i = 0;
	while (result[i] != '\0')
	{
		printf("%c", result[i]);
		i++;
	}
	free(result);
}*/
