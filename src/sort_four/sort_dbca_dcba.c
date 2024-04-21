/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dbca_dcba.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:39:03 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 15:13:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void dbca(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		rra(a);
		
	}	
}

void dcab(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		rra(a);
		rra(a);
		sa(a);
		
	}	
}

void dcba(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		sa(a);
		ra(a);
		ra(a);
		sa(a);
		
	}	
}

