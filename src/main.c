/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 17:29:11 by nrobinso         ###   ########.fr       */
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
	nb_elements = ft_lstsizenode(*a) + 1;
	if (!a)
		return (1);
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	if (is_stack_sorted(a))
		return (free_msg(a, b, 2, ""));
	if (nb_elements < 5)
		small_sort(a, nb_elements);
	if (nb_elements == 5 || nb_elements == 6)	
		five_sort(a, b, nb_elements);	


	update_node_id(a);	
	print_stack(a, 'a');
	print_stack(b, 'b');
	return (free_msg(a, b, 2, ""));
}
