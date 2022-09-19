/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:49:33 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/19 18:04:38 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while(i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			a = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			i--;
		}
		i++;
	}
}

int main()
{
    int tab[6] = {1,5,9,8,4,2};
    ft_sort_int_tab(tab,6);
    printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
}
