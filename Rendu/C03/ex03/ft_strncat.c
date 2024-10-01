/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:47:16 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/09 20:33:29 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	isrc;
	int				idest;

	isrc = 0;
	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	while (isrc != nb && src[isrc] != '\0')
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
	char	src[] = "Toeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	char	dest[] = "Cassu";

	printf("%s", ft_strncat(dest, src, 110));
}
*/
