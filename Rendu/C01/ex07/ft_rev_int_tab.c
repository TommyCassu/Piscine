/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:12:41 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/08 18:48:59 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1,2,3,4,5,6,7};
	
	printf("%d, %d, %d, %d, %d, %d, %d ---> " ,
       	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	ft_rev_int_tab(tab, 7); 
	printf("%d, %d, %d, %d, %d, %d, %d ---> " ,
        tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);

}
*/
