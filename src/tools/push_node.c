/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:07:11 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/26 16:50:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	del_node(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}

int	push(t_stack **stack_dst, t_stack **stack)
{
	t_stack	*node;
	int		nb_elements;

	if (!stack)
		return (0);
	nb_elements = ft_lstsizenode(*stack);
	if (nb_elements < 1)
		return (0);
	node = (t_stack *)ft_lstnewnode((*stack)->valeur, (*stack)->id);
	ft_lstaddnode_front(stack_dst, node);
	del_node(stack);
	return (1);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b)
		return ;
	push(stack_a, stack_b);
	//if (push(stack_a, stack_b))
		//ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a)
		return ;
	push(stack_b, stack_a);
	//if (push(stack_b, stack_a))
		//ft_printf("pb\n");
}
