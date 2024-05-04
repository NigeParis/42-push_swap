/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:07:11 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 14:54:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	push(t_stack **stack_dst, t_stack **stack)
{
	t_stack	*node;
	int		nb_elements;

	if (!stack)
		return (0);
	nb_elements = ft_lstsizenode(*stack);
	if (nb_elements < 1)
		return (0);
	node = (*stack)->next;
	(*stack)->next = *stack_dst;
	*stack_dst = *stack;
	(*stack) = node;
	return (1);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b)
		return ;
	push(stack_a, stack_b);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a)
		return ;
	push(stack_b, stack_a);
}
