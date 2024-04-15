/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 15:15:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void del_content(void *content)
{
	printf("delone %d\n", *(int *)content);
	content = 0; 
	free(content);
	return ;
}











int main(int argc, char *argv[])
{
	char *str;
	
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1),1);

	str = input_parsing(argc, argv);



	free(str);
	return (0);
}