/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:16:06 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/19 14:31:20 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_verif_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
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

void	ft_send_words(char *str, char *charset, char **tab, int count)
{
	int		i;
	int		k;
	int		debut;
	int		fin;
	int		nbaddedword;
	char	*word;
	
	i = 0;
	k = 0;
	nbaddedword = 1;
	while (str[i] != '\0')
	{
		while (ft_verif_is_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
		debut = i;
		while (ft_verif_is_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		fin = i - 1;
		if (nbaddedword <= count)
		{
			word = (char *)malloc(sizeof(char) * (fin - debut + 1) + 1);
			nbaddedword++;
		}
		if (k < count)
		{
			tab[k] = ft_strcpy(str, word, debut, fin);
			k++;
		}
	}
	tab[k] = 0;
}

int	ft_wordscount(char *str, char *charset)
{
	int	i;
	int	count;
	int	actuallyword;

	i = 0;
	count = 0;
	actuallyword = 0;
	while (str[i] != '\0')
	{
		if (ft_verif_is_charset(str[i], charset) == 1 && actuallyword == 0)
		{
			count++;
			actuallyword = 1;
		}
		if (ft_verif_is_charset(str[i], charset) == 0)
			actuallyword = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	nbwords = ft_wordscount(str, charset);
	tab = (char **)malloc(sizeof(char *) * (nbwords + 1));
	ft_send_words(str, charset, tab, nbwords);
	return (tab);
}

int	main(void)
{
	char	charset[] = " .";
	char	av[] = " toto  eeq  qwe  tw ew ";
	char	**result = ft_split(av, charset);
	int	i;
	
	//ft_split(av, charset);
	i = 0;

	while (result[i] != 0)
	{
		printf("[%s]", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
