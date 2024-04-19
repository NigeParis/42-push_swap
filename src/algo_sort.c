/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:18:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/19 21:20:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_stack **a, int argc)
{
	int	*frst;
	int	*scnd;
	int	*thrd;
	
	frst = &(*a) -> valeur;
	scnd = &(*a) -> next -> valeur;
	thrd = &(*a) -> next -> next -> valeur;
	if (*frst < *scnd && argc == 3)
		sa(a);
	if (*frst < *scnd && *scnd > *thrd && *frst > *thrd && argc == 4)
		sa(a);
	if (*frst > *scnd && *scnd < *thrd && *frst > *thrd && argc == 4)
	{
		rra(a);
		sa(a);
	}
	if (*frst < *scnd && *scnd > *thrd && *frst < *thrd && argc == 4)
		ra(a);
	if (*frst > *scnd && *scnd < *thrd && *frst < *thrd && argc == 4)
		rra(a);
	if (*frst < *scnd && *scnd < *thrd && *frst < *thrd && argc == 4)
	{
		ra(a);
		sa(a);
	}
}
