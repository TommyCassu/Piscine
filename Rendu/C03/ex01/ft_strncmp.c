/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:09:36 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/10 16:51:28 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && n != 1)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "A";
	char	s2[] = "B";

	printf("%d", ft_strncmp(s1, s2, 0));
}

