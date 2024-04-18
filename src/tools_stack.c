/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:42:32 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 19:49:42 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	**getstack_a(int i, int argc, char *argv[])
{
	char	**tab_str;
	t_stack	**ptr_stack_a;
	t_stack	*new_node;

	tab_str = data_parsing(argc, argv);
	if (!tab_str)
		return (NULL);
	ptr_stack_a = (t_stack **)malloc(sizeof(t_stack));
	if (!ptr_stack_a)
		return (getstack_error(1, tab_str, ptr_stack_a), NULL);
	*ptr_stack_a = NULL;
	while (tab_str[i])
	{
		new_node = (t_stack *)ft_lstnewnode((int)ft_atoi(tab_str[i]), i);
		ft_lstaddnode_front(ptr_stack_a, new_node);
		i++;
	}
	if (argc == 2 && i == 1)
		return (getstack_error(1, tab_str, ptr_stack_a), NULL);
	return (ft_free_double_tab(tab_str), ptr_stack_a);
}

int	print_stack(t_stack **stack, char c)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return (printf("stack %c empty\n\n", c), 1);
	tmp = *stack;
	printf("stack : %c\n", c);
	while (tmp)
	{
		if (tmp->next)
		{
			ft_printf("id: %d ", tmp->id);
			ft_printf("nbr: %d ", tmp->valeur);
			ft_printf("add: %p \n", tmp->next);
			tmp = tmp->next;
		}
		else
		{
			ft_printf("id: %d ", tmp->id);
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
