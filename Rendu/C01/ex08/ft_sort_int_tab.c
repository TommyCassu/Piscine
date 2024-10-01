/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:14:22 by tcassu            #+#    #+#             */
/*   Updated: 2024/09/08 14:50:32 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {7,6,5,4,3,2,1,};
	
	printf("%d, %d, %d, %d, %d, %d, %d \n", 
	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	ft_sort_int_tab(tab, 7);
	printf("%d, %d, %d, %d, %d, %d, %d",
       	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
}
*/
