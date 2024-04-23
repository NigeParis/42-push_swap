/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:23:59 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/23 20:00:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_max(t_stack **a, t_stack **b, int max)
{
	t_stack *tmp;

	tmp = *a;
	if(!a)
		return ;
	while (tmp->next != NULL)
	{
		
		while (tmp->valeur != max)
		{
			a = &(*a)->next;
			tmp = *a;
		}
		if (tmp->valeur == max)
		{
			
			pb(a,b);
			break ;
		}
		if ((*a)->next == NULL)
		{
			if (tmp->valeur == max)
				pb(a,b);			
			break ;
		}
	}
}

void	push_min(t_stack **a, t_stack **b, int min)
{
	t_stack *tmp;

	tmp = *a;
	if(!a)
		return ;
	while (tmp->next != NULL)
	{
		while (tmp->valeur != min)
		{
			a = &(*a)->next;
			
			tmp = *a;
		}
		if (tmp->valeur == min)
		{
			pb(a,b);
			break ;
		}	
		if ((*a)->next == NULL)
		{
			if (tmp->valeur == min)
				pb(a,b);	
			break ;
		}
	}
}


void	sort_five(t_stack **a, t_stack **b,  int argc)
{
	int	max;
	int	po_max = 0;
	int	po_min = 0;
	int	min;
	int	p[5];
	t_stack *tmp;
	
	tmp = *a;
	
	p[0] = (*a)->valeur;
	p[1] = (*a)->next->valeur;
	p[2] = (*a)->next->next->valeur;
	p[3] = (*a)->next->next->next->valeur;
	p[4] = (*a)->next->next->next->next->valeur;
	po_max = find_max_val_pos(p, argc);
	max = find_max_val(p, argc);
	
	if (po_max == 0)
	{
		pb(a,b);
	}
	if (po_max == 1)
	{
		ra(a);
		pb(a,b);
	}
	if (po_max == 2)
	{
		ra(a);
		ra(a);
		pb(a,b);
	}

	if (po_max == 3)
	{
		rra(a);
		rra(a);
		pb(a,b);	
	}
	if (po_max == 4)
	{
		rra(a);
		pb(a,b);
	}
	po_min = find_min_val_pos(p, argc - 1);
	min = find_min_val(p, argc - 1);
	//ft_printf("------------------------>min %d -po %d argc :%d\n", min, po_min, argc);
	//print_stack(a,'T');	
	//print_stack(b,'t');

	if (po_min == 0)
	{
		pb(a,b);
	}
	if (po_min == 1)
	{
		ra(a);
		pb(a,b);
	}
	if (po_min == 2)
	{
		ra(a);
		ra(a);
		pb(a,b);
	}
	if (po_min == 3)
	{
		rra(a);
		pb(a,b);
	}
	//print_stack(a,'a');	
	//print_stack(b,'b');

	sort_three(a, 4);
//	sort_three(b, 3);
	pa(a, b);
	pa(a, b);
	ra(a);

	////print_stack(a,'A');	
	////print_stack(b,'B');
}
