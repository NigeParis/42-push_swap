/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/25 13:11:29 by nrobinso         ###   ########.fr       */
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
	if (!a)
		return (1);
	nb_elements = ft_lstsizenode(*a) + 1;
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;
	
	if (is_stack_sorted(a))
		return (free_msg(a, b, 2, ""));
	if (nb_elements < 5)
		sort_three(a, nb_elements);
	if (nb_elements > 4 && nb_elements < 7)
		sort_five (a, b, nb_elements);
	//print_stack(a, 'A');
	
	if (nb_elements > 6)
		sort_big(a, b, nb_elements);
	
	
	
	print_stack(a, 'M');
	print_stack(b, 'b');
	//update_node_id(a);	
	//ft_printf("---int---->%d\n", ft_unint_to_int(ft_int_to_unint(ft_atoi(argv[1]))));
	//ft_printf("----unit-->%u\n", ft_int_to_unint(ft_atoi(argv[1])));
	//ft_printf("----int-->%d\n", ft_unint_to_int(ft_atoi(argv[1])));
	// print_stack(a, 'A');
	// print_stack(b, 'B');
	return (free_msg(a, b, 2, ""));
}

