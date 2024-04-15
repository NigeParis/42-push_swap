/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:14:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 15:15:36 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


char *cleanzero(char *str)
{
	int i;
	int j;
	char buffer[BUFFER];
	char *ret_str;

	i = 0;
	j = 0;
	while (str && str[i] == '0')
		i++;
	if (str[i] == ' ')
		i--;
	ft_delzero(str, buffer, i, j);
	ret_str = ft_strdup(buffer);	
	return (ret_str);	
}

void	ft_delzero(char *str, char *buffer, int i, int j)
{
	while (str && str[i])
	{
		if (str[i] == ' ' && str[i + 1] == '0')
		{
			i++;
			while (str[i] == '0')
				i++;
			if ((str[i - 1] == '0' && str[i] == ' ' ) || str[i + 1] == '0' || str[i + 1] == '\0')
				i--;
			buffer[j] = ' ';
			j++;	
		}
		buffer[j] = str[i];
		i++;
		j++;
	}
	buffer[j] = '\0';
}

