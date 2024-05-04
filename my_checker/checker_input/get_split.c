/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:27:51 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 14:54:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

char	**data_parsing(int argc, char *argv[])
{
	char	*str;
	char	**tab_str;

	tab_str = NULL;
	str = input_parsing(0, argc, argv);
	if (str == NULL)
		return (ft_putstr_fd("Error\n", 1), tab_str);
	if (is_over_int_limits(str))
	{
		free(str);
		return (ft_putstr_fd("Error\n", 1), tab_str);
	}
	tab_str = ft_split(str, ' ');
	free(str);
	return (tab_str);
}

int	ft_print_data(char **tab_str)
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
