/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:47:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 17:11:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	five_sort(t_stack **a, t_stack **b, int argc)
{
	int	p[5];
	int	p_max;

	p[0] = (*a)-> valeur;
	p[1] = (*a)-> next -> valeur;
	p[2] = (*a)-> next -> next -> valeur;
	p[3] = (*a)-> next -> next -> next -> valeur;
	if (argc == 5)
		return (four_sort(a, b, argc, p), 0);		
	if (argc == 6)
		p[4] = (*a)-> next -> next -> next -> next -> valeur;
	p_max = find_max_val_pos(p, argc);	

	if (p_max == 4)
		sort_pos_four(a, b, argc, p);
	if (p_max == 3)
		sort_pos_three(a, b, argc, p);
	if (p_max == 2)
		sort_pos_two(a, b, argc, p);
	if (p_max == 1)
		sort_pos_one(a, b, argc, p);
	if (p_max == 0)
		sort_pos_zero(a, b, argc, p);
	return (0);
}