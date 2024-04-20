/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bxxx_bcad.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:31:32 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/20 12:41:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



void bacd(t_stack **a, t_stack **b, int **p)
{
	if (*p[0] > *p[1] && *p[0] > *p[2] && *p[0] > *p[3] && 
		*p[1] > *p[2] && *p[1] > *p[3] && *p[2] < *p[3])
	{
		(void)b;
		ra(a);	
		ra(a);	
		sa(a);
		ra(a);	
		ra(a);
	}	
}


void badc(t_stack **a, t_stack **b, int **p)
{
	if (*p[0] < *p[1] && *p[0] > *p[2] && *p[0] > *p[3] && 
		*p[1] > *p[2] && *p[1] > *p[3] && *p[2] < *p[3])
	{
		(void)b;
		sa(a);
		ra(a);
		ra(a);
		sa(a);
		ra(a);
		ra(a);
	}	
}


void bcad(t_stack **a, t_stack **b, int **p)
{
	if (*p[0] > *p[1] && *p[0] > *p[2] && *p[0] > *p[3] && 
		*p[1] < *p[2] && *p[1] < *p[3] && *p[2] > *p[3])
	{
		(void)b;
		sa(a);
		ra(a);
	}	
}