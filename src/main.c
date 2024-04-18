/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 10:18:58 by nrobinso         ###   ########.fr       */
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
	(void)argv;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	stack_a = getstack_a(0, argc, argv);
	if (!stack_a)
		return (1);
	





	print_stack(stack_a);
	clear_stack(stack_a);
	
	
	return (0);

}