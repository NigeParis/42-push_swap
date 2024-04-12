/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 16:47:05 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// typedef struct s_list
// {
// 	void *content;
// 	struct s_list *next;
	
// } t_list;

void del_content(void *content)
{
	content = NULL; 
//	free(content);
	return ;
}



int	main(int argc, char *argv[])
{
	(void)argc,
	(void)argv;

	int d;
	int c;
	int b;
	
	d = 65;
	c = 999;
	b = -777;

	t_list *first[3];
	
	first[2] = ft_lstnew(&b);
	first[0] = ft_lstnew(&d);
	first[1] = ft_lstnew(&c);

	
 	printf("%d\n", *(int *)first[0]->content );
	printf("%d\n", ft_lstsize(first[0]));
	ft_lstadd_back(first, first[1]);
	ft_lstadd_front(first, first[2]);
	printf("%d\n", ft_lstsize(first[0]));

 	printf("%d\n", *(int *)first[0]->content );
 	printf("%d\n", *(int *) first[1]->content );
	// ft_lstdelone(first[0], del_content);
	ft_lstdelone(first[2], del_content);
	
 	printf("%d\n", *(int *)first[0]->content );
 	printf("first [1] %d\n", *(int *) first[1]->content );
	printf("%d\n", ft_lstsize(first[0]));

	printf("last : %d\n", *(int *)ft_lstlast(first[0])->content);
	
	int i = 0;
	if (first[i]->next)
	{
		if (first[i] != NULL)
		{
			free(first[i]);
			first[i] = NULL;
		}
		i++;
	}
	free(first[i]);
	first[i] = NULL;



	if (first[0] != NULL)
		printf("after free %d\n", *(int *)first[0]->content );
	if (first[1] != NULL)
	 	printf("after free %d\n", *(int *) first[1]->content );
		
		
	printf("%p\n", first[1]);
	printf("%p\n", first[0]);
	
	return (0);
}
