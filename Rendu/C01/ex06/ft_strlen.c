/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:42:34 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/05 16:54:07 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (*str != '\0')
	{
		compteur++;
		str++;
	}
	return (compteur);
}
