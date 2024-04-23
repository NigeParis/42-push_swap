/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/23 08:54:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"







int	main(int argc, char *argv[])
{
	t_stack **a;
	t_stack **b;
	int 	nb_elements;

	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	a = getstack_a(0, argc, argv);
	print_stack(a, 's');
	nb_elements = ft_lstsizenode(*a) + 1;
	if (!a)
		return (1);
//	ft_printf("HERE\n");
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	
	if (is_stack_sorted(a))
		return (free_msg(a, b, 2, ""));
	if (nb_elements < 5)
		sort_three(a, nb_elements);


	update_node_id(a);	
	print_stack(a, 'a');
	print_stack(b, 'b');
	return (free_msg(a, b, 2, ""));
}

