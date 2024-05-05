/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_node_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:12:49 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/05 18:15:09 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	find_smaller_nbr(t_stack *tmp, unsigned int nbr)
{
	unsigned int	i;

		i = 1;
		while (tmp)
		{
			if (tmp->id < nbr)
				i++;
			tmp = tmp->next;
		}
		tmp2->new_id = i;
}

void	get_new_index(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	unsigned int	nbr;

	tmp2 = *stack;
	nbr = tmp2->id;
	while (1)
	{
		tmp = *stack;
		
		if (tmp2->next)
			nbr = tmp2->next->id;
		else
			break ;
		tmp2 = tmp2->next;
	}
}



void	update_node_id(t_stack **stack)
{
	t_stack			*tmp;
	unsigned int	i;
	
	tmp = *stack;
	i = ft_lstsizenode(*stack);
	while (tmp)
	{
		if (tmp)
		{
			tmp->new_id = i;
			tmp = tmp->next;
		}
		else
			break ;
		i++;
	}	
	get_new_index(stack);
}
