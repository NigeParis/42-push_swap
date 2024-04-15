/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:14:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 17:14:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


char *cleanzero(char *str)
{
	int i;
	int j;
	char *buffer;
	char *ret_str;

	i = 0;
	j = 0;
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!buffer)
		return 0;
	while (str && str[i] == '0')
		i++;
	if (str[i] == ' ')
		i--;
	ft_delzero(str, buffer, i, j);
	ret_str = ft_strdup(buffer);
	free(buffer);
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

char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i)
{
	while (clean_str[i])
	{	
		findstr = str_to_find(&clean_str[i]);
		if (is_args_double(clean_str, findstr))
		{
			free(findstr);
			free(clean_str);
			clean_str = NULL;
			break ;
		}
		i++;
		while (clean_str[i] == ' ')
			i++;
		free(findstr);
	}
	return (clean_str);
}


