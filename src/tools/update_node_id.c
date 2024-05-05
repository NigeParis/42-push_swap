/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_node_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:12:49 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/05 14:15:13 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	update_min_val_pos(t_stack **stack, unsigned int min)
{
	t_stack		*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp)
		{	
			if (tmp->id == min)
				tmp->new_id = 0;
			tmp = tmp->next;
		}
		else
			break ;	
	}	
}

unsigned int	find_next_min(t_stack **stack, unsigned int min, unsigned int index)
{
	t_stack			*tmp;
	unsigned int 	loop;

	tmp = *stack;
	loop = 0;

	while (tmp)
	{
		if (tmp)
		{	
			ft_printf("index:%u id :%u  min:%u\n",index,  tmp->id, min);
			if (tmp->id == min)
			{
				tmp->new_id = index;
				index++;
			}
			tmp = tmp->next;
		}
		else
			break ;	
		min++;	
	}
	return (min);
}

unsigned int 	get_new_index(t_stack **stack, unsigned int min)
{
	t_stack		*tmp;
	unsigned int index;
	unsigned int new_min;

	index = 1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp)
		{	
			new_min = find_next_min(stack, min, index);
			tmp = tmp->next;
			min++;
		}
		else
			break ;	
	}	
	return (new_min);
}





void	update_node_id(t_stack **stack)
{
	t_stack			*tmp;
	unsigned int	i;
	int	y;
	unsigned int	min;
	unsigned int	new_min;


	tmp = *stack;
	y = 1;
	i = ft_lstsizenode(*stack);
	min = find_min_val(stack, i);
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
	update_min_val_pos(stack, min);

	new_min = get_new_index(stack, (min + y));
	min = new_min + 1;
	new_min = get_new_index(stack, (min));
	
	
	
}
