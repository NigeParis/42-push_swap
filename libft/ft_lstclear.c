/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:29:26 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 08:56:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*swap;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		swap = tmp -> next;
		ft_lstdelone(tmp, del);
		tmp = swap;
	}
	*lst = NULL;
}
