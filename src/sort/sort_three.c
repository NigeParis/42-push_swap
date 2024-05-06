/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:18:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 11:10:28 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_stack **stack, int argc)
{
	int	nde[3];

	nde[0] = (*stack)-> valeur;
	nde[1] = (*stack)-> next-> valeur;
	if (nde[0] > nde[1] && argc < 4)
		return (sa(stack));
	if (argc > 3)
		nde[2] = (*stack)-> next -> next -> valeur;
	if ((nde[0] < nde[1] && nde[1] > nde[2] && nde[0] > nde[2]) && argc > 3)
		rra(stack);
	if ((nde[0] > nde[1] && nde[1] < nde[2] && nde[0] > nde[2]) && argc > 3)
		ra(stack);
	if ((nde[0] < nde[1] && nde[1] > nde[2] && nde[0] < nde[2]) && argc > 3)
	{
		rra(stack);
		sa(stack);
	}
	if ((nde[0] > nde[1] && nde[1] < nde[2] && nde[0] < nde[2]) && argc > 3)
		sa(stack);
	if ((nde[0] > nde[1] && nde[1] > nde[2] && nde[0] > nde[2]) && argc > 3)
	{
		ra(stack);
		sa(stack);
	}
}
