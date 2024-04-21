/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cabd_cbad.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:40:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 13:09:36 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


void cabd(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] > p[2] && p[0] > p[3] && 
		p[1] > p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		rra(a);
		sa(a);
	}	
}

void cbad(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] > p[2] && p[0] > p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] < p[3])
	{
		(void)b;	
		ra(a);
		sa(a);
		ra(a);
		ra(a);
		sa(a);
	}	
}

void cadb(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] > p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] > p[3] && p[2] < p[3])
	{
		(void)b;	
		sa(a);
		rra(a);
		sa(a);
	
	}	
}
