/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 15:08:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort(t_stack **a, t_stack **b, unsigned int nodes, unsigned int mask)
{
	t_stack			*tmp;
	unsigned int	bit_pos;
	unsigned int	node_pos;
	unsigned int	size_in_bits;

	bit_pos = 0;
	size_in_bits = sizeof(int) * 8;
	while (bit_pos < size_in_bits)
	{
		node_pos = 0;
		while (node_pos < nodes)
		{
			tmp = *a;
			if (((tmp->id >> bit_pos) & mask) == 1)
				ra(a);
			else
				pb(a, b);
			node_pos++;
		}
		while ((*b))
			pa(a, b);
		if (is_stack_sorted(a))
			break ;
		bit_pos++;
	}
}

void	sort_big(t_stack **a, t_stack **b, unsigned int stack_size)
{
	int	nb_nodes;

	nb_nodes = stack_size - 1;
	sort(a, b, nb_nodes, 0b00000001);
}
