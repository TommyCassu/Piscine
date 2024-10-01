/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:05:58 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/23 16:50:18 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	word = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) == 1)
			word = 0;
		if (ft_is_charset(str[i], charset) == 0 && word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcpy(char *str, char *dest, int debut, int fin)
{
	int	i;

	i = 0;
	while (debut <= fin)
	{
		dest[i] = str[debut];
		i++;
		debut++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_set_string(char *str, char *charset, char **tab)
{
	int		i;
	int		debut;
	int		fin;
	int		actualnbword;
	char	*word;

	i = 0;
	actualnbword = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		debut = i;
		while (ft_is_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
		fin = i - 1;
		if (actualnbword < ft_count_word(str, charset))
		{
			word = (char *)malloc(sizeof(char) * (fin - debut + 1) + 1);
			tab[actualnbword] = ft_strcpy(str, word, debut, fin);
			actualnbword++;
		}
	}
	tab[actualnbword] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
	ft_set_string(str, charset, tab);
	return (tab);
}
