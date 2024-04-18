/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 19:37:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	del_content(void *content)
{
	printf("delone %d\n", *(int *)content);
	content = 0;
	free(content);
	return ;
}







int	main(int argc, char *argv[])
{
	t_stack **a;
	t_stack **b;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	a = getstack_a(0, argc, argv);
	if (!a)
		return (1);
	b = (t_stack **)malloc(sizeof(t_stack));
	if (!b)
		return (free_msg(a, b, 1, "Error\n"));
	*b = NULL;


	print_stack(a, 'a');
	// sa(stack_a);
	// push(b, a);
	// push(b, a);
	// push(b, a);
	// push(b, a);
	// push(b, a);

	// push(b, a);
	//ss(a, b);
	print_stack(b, 'b');

	//sb(b);


	pa(a,b);

	print_stack(a, 'a');
	print_stack(b, 'b');
	return (free_msg(a, b, 2, ""));
}