/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_postion_select.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:43:21 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 16:32:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	four_sort(t_stack **a, t_stack **b, int argc, int *p)
{
	(void)argc;
	int p_min;

	p[0] = (*a)-> valeur;
	p[1] = (*a)-> next -> valeur;
	p[2] = (*a)-> next -> next -> valeur;
	p[3] = (*a)-> next -> next -> next -> valeur;
	p_min = find_min_val_pos(p, argc);
	if (p_min == 3)
		axxx(a,b,p);	
	if (p_min == 2)
		xaxx(a,b,p);
	if (p_min == 1)
		xxax(a,b,p);	
	if (p_min == 0)
		xxxa(a,b,p);		
	return (0);
}

void	axxx(t_stack **a, t_stack **b, int *p)
{
		abdc(a,b,p);
		acbd(a,b,p);
		acdb(a,b,p);
		adbc(a,b,p);
		adcb(a,b,p);	
}

void	xaxx(t_stack **a, t_stack **b, int *p)
{
		bacd(a,b,p);
		badc(a,b,p);
		cabd(a,b,p);
		dabc(a,b,p);
		dacb(a,b,p); 
		cadb(a,b,p);
}

void	xxax(t_stack **a, t_stack **b, int *p)
{
		cbad(a,b,p);	
		bcad(a,b,p);
		bdac(a,b,p);
		cdab(a,b,p);
		dcab(a,b,p);
		dbac(a,b,p);
}
void	xxxa(t_stack **a, t_stack **b, int *p)
{
		bcda(a,b,p);
		cdba(a,b,p);
		bdca(a,b,p);
		dbca(a,b,p);
		dcba(a,b,p);
		cbda(a,b,p);
}