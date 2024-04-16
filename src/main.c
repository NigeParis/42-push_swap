/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 21:01:42 by nrobinso         ###   ########.fr       */
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

int	ft_print_tab_str(char **tab_str)
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

int	main(int argc, char *argv[])
{
	char	*str;
	char	**tab_str;

	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	str = input_parsing(argc, argv);
	if (str == NULL)
		return (ft_putstr_fd("Error\n", 1), 1);
	if (is_over_int_limits(str))
	{
		free(str);
		return (ft_putstr_fd("Error\n", 1), 1);
	}
	tab_str = ft_split(str, ' ');
	ft_print_tab_str(tab_str);
	free(str);
	ft_free_double_tab(tab_str);
	return (0);
}
