/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:23:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 14:55:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*lastbefore;

	first = *stack;
	if (!stack)
		return (0);
	if ((ft_lstsizenode(first)) < 2)
		return (0);
	while (1)
	{
		if (first->next->next == NULL)
		{
			lastbefore = first;
			break ;
		}
		first = first -> next;
	}
	last = ft_lstlastnode(*stack);
	lastbefore->next = NULL;
	last->next = (*stack);
	(*stack) = last;
	return (1);
}

void	rra(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	rev_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	rev_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	if ((ft_lstsizenode(*stack_a) > 1) && (ft_lstsizenode(*stack_a) > 1))
	{
		rev_rotate(stack_a);
		rev_rotate(stack_b);
	}		
}
