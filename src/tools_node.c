/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:12:49 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/20 08:22:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	update_node_id(t_stack **stack)
{
	t_stack *tmp;
	int i;

	i = ft_lstsizenode(*stack) - 1;
	tmp = *stack;
	
	while (tmp)
	{
		if (tmp)
		{
			tmp->id = i;
			tmp = tmp->next;
		}
		else
			break ;
		i--;	
	}	
}

