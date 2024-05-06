/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:27:51 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 13:06:00 by nrobinso         ###   ########.fr       */
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
		return (ft_putstr_fd("Error\n", 2), tab_str);
	if (is_over_int_limits(str))
	{
		free(str);
		return (ft_putstr_fd("Error\n", 2), tab_str);
	}
	tab_str = ft_split(str, ' ');
	free(str);
	return (tab_str);
}
