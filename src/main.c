/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 15:49:28 by nrobinso         ###   ########.fr       */
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
	t_stack **stack_a;
	t_stack **stack_b;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	stack_a = getstack_a(0, argc, argv);
	if (!stack_a)
		return (1);
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	if (!stack_b)
		return (free_msg(stack_a, stack_b, 1, "Error\n"));
	*stack_b = NULL;








	print_stack(stack_a);
	print_stack(stack_b);
	return (free_msg(stack_a, stack_b, 2, ""));
}