/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:27:51 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 07:44:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**data_parsing(int argc, char *argv[])
{
	char	*str;
	char	**tab_str;

	tab_str = NULL;
	str = input_parsing(0, argc, argv);
	if (str == NULL)
		return (ft_putstr_fd("Error\n", 1), tab_str);
	if (is_over_int_limits(str))
	{
		free(str);
		return (ft_putstr_fd("Error\n", 1), tab_str);
	}
	tab_str = ft_split(str, ' ');
	free(str);
	return (tab_str);
}

int	ft_print_data(char **tab_str)
{
	int	i;

	i = 0;
	ft_putstr_fd("str_split : ", 1);
	while (tab_str[i])
	{
		ft_putstr_fd("[", 1);
		ft_putstr_fd(tab_str[i], 1);
		ft_putstr_fd("]", 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	return (i);
}

t_stack	**getstack_a(int argc, char *argv[])
{
	char	**tab_str;
	t_stack	**ptr_stack_a = NULL;
	t_stack *new_node;
	int 	i;
	
	i = 0;
	tab_str = data_parsing(argc, argv);
	if (!tab_str)
		return (NULL);
	free(ptr_stack_a);
	ptr_stack_a = (t_stack**)malloc(sizeof(t_stack));
	*ptr_stack_a = NULL;
	while (tab_str[i])
	{
		new_node = (t_stack *)ft_lstnewnode((int)ft_atoi(tab_str[i]), i);
		ft_lstaddnode_front(ptr_stack_a, new_node);
		i++;
	}
	if (argc == 2)
	{
		new_node = (t_stack *)ft_lstnewnode(0, 1);
		ft_lstaddnode_front(ptr_stack_a, new_node);
	}
	ft_free_double_tab(tab_str);
	return (ptr_stack_a);
}
