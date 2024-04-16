/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/17 00:02:41 by nrobinso         ###   ########.fr       */
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

t_stack_a	*ft_lstnewnode(int content, int id)
{
	t_stack_a	*ptr;

	ptr = ft_calloc(1, sizeof(t_stack_a));
	if (!ptr)
		return (NULL);
	ptr -> id = id;
	ptr -> valeur = content;
	ptr -> next = NULL;
	return (ptr);
}

void	ft_lstaddnode_front(t_stack_a **lst, t_stack_a *new)
{
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

t_stack_a	*ft_lstlastnode(t_stack_a *lst)
{
	if (lst == NULL)
		return (0);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}


void	ft_lstaddnode_back(t_stack_a **lst, t_stack_a *new)
{
	t_stack_a	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlastnode(*lst);
	tmp -> next = new;
}

int	ft_lstsizenode(t_stack_a *lst)
{
	int	size;

	if (lst == NULL)
		return (0);
	size = 0;
	while (lst)
	{
		lst = lst -> next;
		size++;
	}
	return (size);
}


void	print_stack(t_stack_a *stack)
{
	t_stack_a	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("id: %d ", tmp->id);
		ft_printf("nb: %d \n", tmp->valeur);
		tmp = tmp->next;
	}
}

int	main(int argc, char *argv[])
{
	char	**tab_str;
	t_stack_a	*ptr_stack_a[2];
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	tab_str = data_parsing(argc, argv);
	if (!tab_str)
		return (1);

	
	ptr_stack_a[0] = ft_lstnewnode((int)ft_atoi(tab_str[0]), 1);
	ptr_stack_a[1] = ft_lstnewnode((int)ft_atoi(tab_str[1]), 2);


	ft_lstaddnode_back(ptr_stack_a, ptr_stack_a[1]);


	print_stack(ptr_stack_a[0]);

	ft_printf("%s......%s\n", "56", "77");


	printf("size nodes : %d\n", ft_lstsizenode(ptr_stack_a[0]));
	
	printf("valeur du node id : %d : %d\n", ptr_stack_a[0]->id, ptr_stack_a[0]->valeur);
	printf("valeur du node id : %d : %d\n", ptr_stack_a[1]->id, ptr_stack_a[1]->valeur);





		
	ft_print_data(tab_str);
	ft_free_double_tab(tab_str);
	return (0);
}
