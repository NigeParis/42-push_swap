/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cbda_cdba.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:46:05 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 13:09:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


void cbda(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] > p[3] && p[2] < p[3])
	{
		(void)b;	
		rra(a);
		sa(a);
		rra(a);
		rra(a);
		rra(a);
		sa(a);
	}	
}


void cdab(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] > p[3])
	{
		(void)b;	
		rra(a);
		rra(a);
	}	
}

void cdba(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] > p[3])
	{
		(void)b;	
		sa(a);
		rra(a);
		rra(a);
	}	
}