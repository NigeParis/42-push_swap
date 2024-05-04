/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_first_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:54:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/04 14:53:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	check_sign_first_arg(char *input_str)
{
	int	i;

	i = 1;
	while (input_str && input_str[i] && input_str[i] != ' ')
	{
		if (input_str[i] == '-' || input_str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	check_first_arg(char *input_str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (input_str[i] == ' ')
	{
		while (input_str && input_str[i] == ' ')
			i++;
		while (input_str && input_str[i])
		{
			input_str[j] = input_str[i];
			j++;
			i++;
		}
		input_str[j] = '\0';
	}
	if (check_sign_first_arg(input_str))
		input_str[0] = '\0';
}
