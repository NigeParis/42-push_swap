/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:18:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 18:44:12 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_stack **a, int argc)
{
	int	*frst;
	int	*scnd;
	int	*thrd;

	frst = &(*a)-> valeur;
	scnd = &(*a)-> next-> valeur;
	if (*frst < *scnd && argc == 3)
		return (sa(a));
	thrd = &(*a)-> next -> next -> valeur;
	if (*frst < *scnd && *scnd > *thrd && *frst > *thrd)
	{
		sa(a);;
	}
	if (*frst > *scnd && *scnd < *thrd && *frst > *thrd)
	{
		rra(a);
		sa(a);
	}
	if (*frst < *scnd && *scnd > *thrd && *frst < *thrd)
		ra(a);
	if (*frst > *scnd && *scnd < *thrd && *frst < *thrd)
		rra(a);
	if (*frst < *scnd && *scnd < *thrd && *frst < *thrd)
	{
		ra(a);
		sa(a);
	}
}







