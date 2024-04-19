/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/19 18:32:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack **a;
	t_stack **b;
	//t_stack *tmp_a;
	//t_stack *tmp_b;
	// long int	max_nb;	
	// long int	min_nb;	
	//int nb = 0;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	a = getstack_a(0, argc, argv);
	if (!a)
		return (1);
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	if (is_stack_sorted(a))
		return (free_msg(a, b, 2, ""));
	







	
	print_stack(a, 'a');
	print_stack(b, 'b');
	return (free_msg(a, b, 2, ""));
}