/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:29:23 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/19 13:52:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	free_msg(t_stack **stack_a, t_stack **stack_b, int action, char *msg)
{
	if (action == 1)
	{
		clear_stack(stack_a);
		ft_printf("%s", msg);
	}
	if (action == 2)
	{
		clear_stack(stack_a);
		clear_stack(stack_b);
		ft_printf("%s", msg);
	}
	return (0);
}

void	getstack_error(int chx, char **tab_str, t_stack **ptr_stack_a)
{
	if (chx == 1)
	{
		ft_free_double_tab(tab_str);
		clear_stack(ptr_stack_a);
		ft_putstr_fd("Error\n", 1);
	}
	if (chx == 2)
	{
		ft_free_double_tab(tab_str);
		ft_putstr_fd("Error\n", 1);
	}
}
