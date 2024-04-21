/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:48:48 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 16:49:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_pos_four(t_stack **a, t_stack **b, int argc, int *p)
{
	rra(a);
	pb(a,b);
	four_sort(a, b, argc, p);
	pa(a,b);
}

void	sort_pos_three(t_stack **a, t_stack **b, int argc, int *p)
{	
	rra(a);
	rra(a);
	pb(a,b);
	four_sort(a, b, argc, p);
	pa(a,b);
}

void	sort_pos_two(t_stack **a, t_stack **b, int argc, int *p)
{
	ra(a);
	ra(a);
	pb(a,b);
	four_sort(a, b, argc, p);
	pa(a,b);
}
void	sort_pos_one(t_stack **a, t_stack **b, int argc, int *p)
{
	ra(a);
	pb(a,b);
	four_sort(a, b, argc, p);
	pa(a,b);
}
void	sort_pos_zero(t_stack **a, t_stack **b, int argc, int *p)
{
		pb(a,b);
		four_sort(a, b, argc, p);
		pa(a,b);
}