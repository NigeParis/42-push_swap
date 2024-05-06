/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 10:13:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	main(int argc, char *argv[])
{
	t_stack	**a;
	t_stack	**b;
	int		count;
	int		*ptr;

	ptr = &count;
	count = 0;
	if (argc < 2)
		return (ft_putstr_fd("", 1), 1);
	a = getstack_a(0, argc, argv);
	if (!a)
		return (1);
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	if (checker(a, b, NULL, &ptr))
		return (free_msg(a, b, 2, ""));
	if (is_stack_sorted(a))
		ft_printf("OK - nbr actions :%d\n", count);
	else
		ft_printf("KO - nbr actions :%d\n", count);
	return (free_msg(a, b, 2, ""));
}

int	checker(t_stack **a, t_stack **b, char *action, int **count)
{
	int	flag;

	flag = 0;
	while (!flag)
	{		
		action = get_next_line(0);
		if (!(action))
			flag = 1;
		action_checker(a, b, action, count);
		if (action && action[0] && action[0] == '\n')
			return (ft_printf("Error\n"), 1);
		ft_free_tab(action);
	}	
	return (0);
}
