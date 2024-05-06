/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:13:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 11:10:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_five(t_stack **a, t_stack **b, int argc)
{
	int	pos_max;
	int	pos_min;
	int	p[5];

	if (argc == 6)
	{
		get_values_in_stack(a, p, 5);
		pos_max = find_max_val_pos(p, argc);
		push_max_five(a, b, pos_max);
	}
	get_values_in_stack(a, p, 4);
	pos_min = find_min_val_pos(p, argc);
	push_min_five(a, b, pos_min);
	sort_three(a, 4);
	pa(a, b);
	pa(a, b);
	if (argc == 6)
		ra(a);
}

void	get_values_in_stack(t_stack **a, int *p, int stack_size)
{
	if (!a)
		return ;
	if (stack_size == 5)
	{
		p[0] = (*a)->valeur;
		p[1] = (*a)->next->valeur;
		p[2] = (*a)->next->next->valeur;
		p[3] = (*a)->next->next->next->valeur;
		p[4] = (*a)->next->next->next->next->valeur;
	}
	if (stack_size == 4)
	{
		p[0] = (*a)->valeur;
		p[1] = (*a)->next->valeur;
		p[2] = (*a)->next->next->valeur;
		p[3] = (*a)->next->next->next->valeur;
	}
}

void	push_max_five(t_stack **a, t_stack **b, int pos_max)
{
	if (pos_max == 0)
		pb(a, b);
	if (pos_max == 1)
	{
		ra(a);
		pb(a, b);
	}
	if (pos_max == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	if (pos_max == 3)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	if (pos_max == 4)
	{
		rra(a);
		pb(a, b);
	}
}

void	push_min_five(t_stack **a, t_stack **b, int pos_min)
{
	if (pos_min == 0)
		pb(a, b);
	if (pos_min == 1)
	{
		ra(a);
		pb(a, b);
	}
	if (pos_min == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	if (pos_min == 3)
	{
		rra(a);
		pb(a, b);
	}
}
