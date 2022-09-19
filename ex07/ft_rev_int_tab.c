/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:37:41 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/17 14:48:16 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    size == *tab;
    while(tab[i])
    {
        i++;
    }
    while(tab[i] > 0)
    {
        write(1,&tab[i],size);
        i--;
    }
}

int main()
{
    ft_rev_int_tab('456',3);
}
