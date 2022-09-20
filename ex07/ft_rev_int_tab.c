/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:37:41 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/20 10:04:20 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	size -= 1;
	while (i <= size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

int main()
{
    int st[6] = {1,2,3,4,5,6};
    ft_rev_int_tab(st,6);
    printf("%d,%d,%d,%d,%d,%d",st[0],st[1],st[2],st[3],st[4],st[5]);
}
