/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:11:04 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/19 07:47:07 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_ultimate(int *********nbr)
{
    int st;

    st = 42;
    *********nbr = st;

    
}

int main()
{
    int a;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;
    
    a = 42;
    
    p1 = &a;
    p9 = &p8;
    p8 = &p7;
    p7 = &p6;
    p6 = &p5;
    p5 = &p4;
    p4 = &p3;
    p3 = &p2;
    p2 = &p1;
    ft_ultimate(p9);
    printf("%d",a);
    
    
}