/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 08:30:53 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 08:38:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	action_checker(t_stack **a, t_stack **b, char *action, int **count)
{
	if (action && a && b)
	{	
		**count += is_swap_action(a, b, action);
		**count += is_rotate_action(a, b, action);
		**count += is_push_action(a, b, action);
		**count += is_rev_rotate_action(a, b, action);
	}
}

int	is_swap_action(t_stack **a, t_stack **b, char *action)
{
	if (ft_strcmp(action, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(action, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(action, "ss\n") == 0)
		ss(a, b);
	else
		return(0);
return (1);
}

int	is_rotate_action(t_stack **a, t_stack **b, char *action)
{
	if (ft_strcmp(action, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(action, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(action, "rr\n") == 0)
		rr(a, b);
	else
		return(0);
return (1);
}

int	is_push_action(t_stack **a, t_stack **b, char *action)
{
	if (ft_strcmp(action, "pa\n") == 0)
		pa(a, b);
	else if (ft_strcmp(action, "pb\n") == 0)
		pb(a, b);
	else
		return(0);
return (1);
}

int	is_rev_rotate_action(t_stack **a, t_stack **b, char *action)
{
	if (ft_strcmp(action, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(action, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(action, "rrr\n") == 0)
		rrr(a, b);
	else
		return(0);
return (1);
}


