/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:18:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/24 14:27:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack **stack, int argc)
{
	int	node[3];

	node[0] = (*stack)-> valeur;
	node[1] = (*stack)-> next-> valeur;
	if (node[0] > node[1] && argc < 4)
		return (sa(stack));
	if (argc > 3)
		node[2] = (*stack)-> next -> next -> valeur;
	if ((node[0] < node[1] && node[1] > node[2] && node[0] > node[2]) && argc > 3)
		rra(stack);
	if ((node[0] > node[1] && node[1] < node[2] && node[0] > node[2]) && argc > 3)
		ra(stack);
	if ((node[0] < node[1] && node[1] > node[2] && node[0] < node[2]) && argc > 3)
	{
		rra(stack);
		sa(stack);
	}
	if ((node[0] > node[1] && node[1] < node[2] && node[0] < node[2]) && argc > 3)
		sa(stack);
	if ((node[0] > node[1] && node[1] > node[2] && node[0] > node[2]) && argc > 3)
	{
		ra(stack);
		sa(stack);
	}
}







