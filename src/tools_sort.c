/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:21:15 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/19 14:10:01 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*tmp;

	if (!stack)
		return (0);
	if (ft_lstsizenode(*stack) < 2)
		return (0);
	first = (*stack);
	second = (*stack)->next;
	tmp = (*stack)->next->next;
	first->next = tmp;
	second->next = first;
	(*stack) = second;
	return (1);
}

void	sa(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	if (swap(stack_a))
		printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	if (swap(stack_b))
		printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	int	nb_elements_a;
	int	nb_elements_b;

	if (!stack_b || !stack_a)
		return ;
	nb_elements_a = ft_lstsizenode(*stack_a);
	nb_elements_b = ft_lstsizenode(*stack_b);
	if (nb_elements_a < 2 || nb_elements_b < 2)
		return ;
	if ((swap(stack_a)) && (swap(stack_b)))
		printf("ss\n");
}
