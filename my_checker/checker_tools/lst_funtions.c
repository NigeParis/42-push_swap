/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_funtions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:08:35 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 15:02:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

t_stack	*ft_lstnewnode(int content, unsigned int id)
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

void	ft_lstaddnode_front(t_stack **lst, t_stack *newnode)
{
	if (!lst && !newnode)
		return ;
	newnode->next = *lst;
	*lst = newnode;
}

void	ft_lstaddnode_back(t_stack **lst, t_stack *newnode)
{
	t_stack	*tmp;

	if (!newnode)
		return ;
	if (!*lst)
	{
		return (ft_lstaddnode_front(lst, newnode));
	}
	tmp = ft_lstlastnode(*lst);
	tmp -> next = newnode;
}

t_stack	*ft_lstlastnode(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (!tmp->next)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

int	ft_lstsizenode(t_stack *lst)
{
	int		size;
	t_stack	*tmp;

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
