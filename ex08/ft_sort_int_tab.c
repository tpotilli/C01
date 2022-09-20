/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:49:33 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/20 10:48:48 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if(tab[i] >= tab[i + 1])
			{
				a = tab[i];
				tab[i] =tab[i + 1];
				tab[i + 1] = a;
				size -= 1;
			}
			i++;
		}
		j++;

		i = 0;
	}
}

int main()
{
    int tab[6] = {1,5,-5,0,9,2};
    ft_sort_int_tab(tab,6);
    printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
}
