/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funtions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:42:32 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 12:42:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rev_stack(t_stack **stack)
{
	t_stack	*prev;
	t_stack	*temp;

	if (!stack)
		return ;
	if (ft_lstsizenode(*stack) < 3)
		return ((void)rotate(stack));
	prev = *stack;
	temp = (*stack)->next;
	*stack = (*stack)->next->next;
	prev->next = NULL;
	while ((*stack)->next != NULL)
	{
		temp->next = prev;
		prev = temp;
		temp = *stack;
		*stack = (*stack)->next;
	}
	temp->next = prev;
	(*stack)->next = temp;
}

int	print_stack(t_stack **stack, char c)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return (ft_printf("stack %c empty\n\n", c), 1);
	tmp = *stack;
	ft_printf("\nstack : %c\n", c);
	while (tmp)
	{
		if (tmp->next)
		{
			ft_printf("id: %u new_id: %u ", tmp->id, tmp->new_id);
			ft_printf("nbr: %d ", tmp->valeur);
			ft_printf("add: %p \n", tmp->next);
			tmp = tmp->next;
		}
		else
		{
			ft_printf("id: %u new_id: %u ", tmp->id, tmp->new_id);
			ft_printf("nbr: %d ", tmp->valeur);
			ft_printf("add: %p \n\n", tmp->next);
			break ;
		}
	}
	return (0);
}

void	clear_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	if (stack)
		free(stack);
	stack = NULL;
}

int	is_stack_sorted(t_stack **a)
{
	t_stack	*tmp;
	int		nbr;

	tmp = *a;
	while (tmp)
	{
		nbr = tmp->valeur;
		if (tmp->next)
		{
			tmp = tmp->next;
			if (nbr > tmp->valeur)
				return (0);
		}
		else
			break ;
	}
	return (1);
}
