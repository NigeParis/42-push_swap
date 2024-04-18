/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 08:43:22 by nrobinso         ###   ########.fr       */
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

t_stack	*ft_lstnewnode(int content, int id)
{
	t_stack	*ptr;
	
	ptr = NULL;
	ptr = (t_stack *)malloc(sizeof(t_stack));
	if (!ptr)
		return (NULL);
	ptr -> id = id;
	ptr -> valeur = content;
	ptr -> next = NULL;
	return (ptr);
}

void	ft_lstaddnode_front(t_stack **lst, t_stack *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_lstlastnode(t_stack *lst)
{
	t_stack *tmp;
	
	tmp = lst;
	while (tmp)
	{
		if(!tmp->next)
			return(tmp);
		tmp = tmp->next;
	}
	return (tmp);
}


void	ft_lstaddnode_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		return (ft_lstaddnode_front(lst,new));
	}
	tmp = ft_lstlastnode(*lst);
	tmp -> next = new;
}

int	ft_lstsizenode(t_stack *lst)
{
	int	size;
	t_stack *tmp;

	tmp = lst;

	if (lst == NULL)
		return (0);
	size = 0;

	while (tmp)
	{
		if (tmp->next)
		{
			size++;
			tmp = tmp -> next;
		}
		else
		{
			size++;
			break ;
		}
	}

	return (size);
}




int	main(int argc, char *argv[])
{
	t_stack **stack_a;
	(void)argv;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	stack_a = getstack_a(argc, argv);
	if (!stack_a)
		return (1);
	





	print_stack(stack_a);
	clear_stack(stack_a);
	
	
	return (0);

}