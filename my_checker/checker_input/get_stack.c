/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:58:35 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 15:07:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

t_stack	**getstack_a(int i, int argc, char *argv[])
{
	char			**tab_str;
	unsigned int	index;
	t_stack			**ptr_stack_a;
	t_stack			*new_node;

	tab_str = data_parsing(argc, argv);
	if (!tab_str)
		return (NULL);
	ptr_stack_a = (t_stack **)malloc(sizeof(t_stack));
	if (!ptr_stack_a)
		return (getstack_error(1, tab_str, ptr_stack_a), NULL);
	*ptr_stack_a = NULL;
	while (tab_str && tab_str[i])
		i++;
	i--;
	while (i >= 0)
	{
		index = ft_int_to_unint(ft_atol(tab_str[i]));
		new_node = (t_stack *)ft_lstnewnode((int)ft_atol(tab_str[i]), index);
		ft_lstaddnode_front(ptr_stack_a, new_node);
		i--;
	}
	return (ft_free_double_tab(tab_str), ptr_stack_a);
}
