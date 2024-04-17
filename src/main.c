/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/17 18:50:43 by nrobinso         ###   ########.fr       */
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

	ptr = ft_calloc(1, sizeof(t_stack));
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


void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;

	while (tmp)
	{
		if (tmp->next)
		{
			ft_printf("id: %d ", tmp->id);
			ft_printf("nb: %d \n", tmp->valeur);
			tmp = tmp->next;
		}
		else
		{
			ft_printf("id: %d ", tmp->id);
			ft_printf("nb: %d \n", tmp->valeur);
			break ;
			
		}
	}
	
}



int	main(int argc, char *argv[])
{
	char	**tab_str;
	t_stack	**ptr_stack_a = NULL;
	t_stack *new_node;
	int 	i;
	
	i = 0;
	if (argc < 3)
		return (ft_putstr_fd("Error\n", 1), 1);
	tab_str = data_parsing(argc, argv);
	if (!tab_str)
		return (1);

	
	ptr_stack_a = (t_stack **)ft_lstnewnode(0, 0);


	while (tab_str[i])
	{
		new_node = (t_stack *)ft_lstnewnode((int)ft_atoi(tab_str[i]), i);
		ft_lstaddnode_front(ptr_stack_a, new_node);
		i++;
	}


	print_stack(*ptr_stack_a);
	printf("\nsize nodes : %d\n", ft_lstsizenode(*ptr_stack_a));



	ft_printf("%s......%s\n", "56", "77");
	
	// printf("valeur du node id : %d : %d\n", ptr_stack_a[0]->id, ptr_stack_a[0]->valeur);
	// printf("valeur du node id : %d : %d\n", ptr_stack_a[1]->id, ptr_stack_a[1]->valeur);





		
	ft_print_data(tab_str);
	ft_free_double_tab(tab_str);
	return (0);
}
