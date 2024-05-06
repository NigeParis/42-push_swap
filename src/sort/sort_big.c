/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 11:09:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_big(t_stack **a, t_stack **b, unsigned int stack_size)
{
	int	nb_nodes;

	nb_nodes = stack_size - 1;
	rdix_sort(a, b, nb_nodes, 0b00000001);
}

void	rdix_sort(t_stack **a, t_stack **b, unsigned int nds, unsigned int mask)
{
	t_stack			*tmp;
	unsigned int	bit_pos;
	unsigned int	node_pos;
	unsigned int	size_in_bits;

	bit_pos = 0;
	size_in_bits = sizeof(UINT32_MAX) * 8;
	while (bit_pos < (size_in_bits))
	{
		node_pos = 0;
		while (node_pos < nds)
		{
			tmp = *a;
			if (((tmp->new_id >> bit_pos) & mask) == 1)
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
