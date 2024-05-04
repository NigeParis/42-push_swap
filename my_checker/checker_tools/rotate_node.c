/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:53:05 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 14:55:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*new;

	if (!stack)
		return (0);
	if ((ft_lstsizenode(*stack)) < 2)
		return (0);
	first = (*stack);
	new = (*stack)->next;
	last = ft_lstlastnode(*stack);
	last -> next = first;
	first -> next = NULL;
	(*stack) = new;
	return (1);
}

void	ra(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	if ((ft_lstsizenode(*stack_a) > 1) && (ft_lstsizenode(*stack_a) > 1))
	{
		rotate(stack_a);
		rotate(stack_b);
	}
}
