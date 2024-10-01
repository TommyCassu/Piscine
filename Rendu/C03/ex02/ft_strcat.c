/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:26:54 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/09 14:41:11 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	isrc;
	int	idest;

	isrc = 0;
	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[5] = "Tommy";
	char	dest[6] = "Cassu";
	
	printf("%s \n", ft_strcat(dest, src));
}
*/
