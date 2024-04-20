/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:18:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/20 12:54:24 by nrobinso         ###   ########.fr       */
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
		sa(a);
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


void cabd(t_stack **a, t_stack **b, int **p)
{
	if (*p[0] > *p[1] && *p[0] > *p[2] && *p[0] > *p[3] && 
		*p[1] > *p[2] && *p[1] < *p[3] && *p[2] < *p[3])
	{
		(void)b;	
		rra(a);
		sa(a);
	}	
}






int	five_sort(t_stack **a, t_stack **b, int argc)
{
	(void)argc;
	int	*p[5];

	p[0] = &(*a)-> valeur;
	p[1] = &(*a)-> next -> valeur;
	p[2] = &(*a)-> next -> next -> valeur;
	p[3] = &(*a)-> next -> next -> next -> valeur;
		
	abdc(a,b,p);
	acbd(a,b,p);
	acdb(a,b,p);
	adbc(a,b,p);
	adcb(a,b,p);

	bacd(a,b,p);
	badc(a,b,p);
	bcad(a,b,p);
	bcda(a,b,p);
	bdac(a,b,p);
	bdca(a,b,p);
	
	cabd(a,b,p);
	

	
	return (0);
}


