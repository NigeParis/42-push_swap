/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 11:50:34 by nrobinso         ###   ########.fr       */
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
	if (str == NULL)
		return (ft_putstr_fd("Error\n", 1), 1);
	if (is_over_int_limits(str))
	{
		free(str);	
		return (ft_putstr_fd("Error\n", 1), 1);
	}	
		


	
	printf("output str :'%s'\n", str);

	printf("int : %ld\n",ft_atoi(str));

	free(str);
	return (0);
}