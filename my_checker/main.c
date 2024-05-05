/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 18:24:39 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	main(int argc, char *argv[])
{
	t_stack	**a;
	t_stack	**b;
	char	*action;

	action = NULL;
	if (argc < 2)
		return (ft_putstr_fd("", 1), 1);
	a = getstack_a(0, argc, argv);
	if (!a)
		return (1);
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	if (checker(a, b, action, 0))
		return (free_msg(a, b, 2, ""));
	if (is_stack_sorted(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (free_msg(a, b, 2, ""));
}

int	checker(t_stack **a, t_stack **b, char *action, int flag)
{
	while (!flag)
	{		
		action = get_next_line(0);
		if (!(action))
			flag = 1;
		action_checker(a, b, action);
		if (action && action[0] && action[0] == '\n')
			return (ft_printf("Error\n"), 1);
		ft_free_tab(action);
	}	
	return (0);
}

void	action_checker(t_stack **a, t_stack **b, char *action)
{
	if (action && a && b)
	{	
		if (ft_strcmp(action, "sa\n") == 0)
			sa(a);
		if (ft_strcmp(action, "sb\n") == 0)
			sb(b);
		if (ft_strcmp(action, "pb\n") == 0)
			pb(a, b);
		if (ft_strcmp(action, "pa\n") == 0)
			pa(a, b);
		if (ft_strcmp(action, "ra\n") == 0)
			ra(a);
		if (ft_strcmp(action, "rb\n") == 0)
			rb(b);
		if (ft_strcmp(action, "rra\n") == 0)
			rra(a);
		if (ft_strcmp(action, "rrb\n") == 0)
			rrb(b);
	}
}
