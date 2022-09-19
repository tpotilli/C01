/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:21:30 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/19 11:13:10 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
	int s;
	int h;
	int *rush;
	int *ger;
	s = 10;
	h = 5;
	ft_div_mod(s, h,rush,ger);
}
