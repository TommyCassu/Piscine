/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:52:43 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/08 18:36:49 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i] != '\0')
	{
		compteur++;
		i++;
	}
	return (compteur);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main()
{
	char	src[] = "Hello!";
	char	dest[] = "World";

	printf("%d | %s", ft_strlcpy(dest, src, 3), dest);
}
*/
