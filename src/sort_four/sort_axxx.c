/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_axxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:31:32 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 15:27:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void abdc(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] > p[2] && p[0] > p[3] && 
		p[1] > p[2] && p[1] > p[3] && p[2] > p[3])
	{	
		(void)b;
		sa (a);
	}
}

void acbd(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] > p[2] && p[0] > p[3] && 
		p[1] < p[2] && p[1] > p[3] && p[2] > p[3])
	{	
		(void)b;
		sa(a);
		rra(a);
		sa(a);
		rra(a);
		rra(a);	
	}
}

void acdb(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] > p[3] && 
		p[1] > p[2] && p[1] > p[3] && p[2] > p[3])
	{
		(void)b;
		rra (a);
		sa(a);
		ra(a);
		ra(a);
	}
}

void adbc(t_stack **a, t_stack **b, int *p)
{
	if (p[0] > p[1] && p[0] < p[2] && p[0] > p[3] && 
		p[1] < p[2] && p[1] > p[3] && p[2] > p[3])
	{
		(void)b;
		sa (a);
		rra (a);
		sa(a);
		rra (a);
		rra (a);
		sa(a);
	}
}

void adcb(t_stack **a, t_stack **b, int *p)
{
	if (p[0] < p[1] && p[0] < p[2] && p[0] > p[3] && 
		p[1] < p[2] && p[1] > p[3] && p[2] > p[3])
	{
		(void)b;
		rra(a);	
		sa(a);
		ra(a);
		ra(a);
		sa(a);
	}	
}
