/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bcda_bdca.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:31:32 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 13:09:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void bcda(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] > p[2] && p[1] > p[3] && p[2] > p[3])
	{
		(void)b;
		sa(a);
		ra(a);
		sa(a);
		ra(a);
		sa(a);
		ra(a);
		ra(a);
	}	
}


void bdac(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] < p[2] && p[0] > p[3] && 
		p[1] < p[2] && p[1] < p[3] && p[2] > p[3])
	{
		(void)b;
		sa(a);
		ra(a);
		sa(a);
	
	}	
}


void bdca(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] < p[3] && 
		p[1] < p[2] && p[1] > p[3] && p[2] > p[3])
	{
		(void)b;
		ra(a);
		sa(a);
	}	
}