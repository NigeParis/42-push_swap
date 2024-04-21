/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dabc_dbac.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:34:48 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 13:09:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


void dabc(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] > p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		rra(a);
	}	
}

void dacb(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] > p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		sa(a);
		rra(a);
	}	
}

void dbac(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] > p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		sa(a);
		sa(a);
        ra(a);
		sa(a);
        ra(a);
        ra(a);	
	}	
}