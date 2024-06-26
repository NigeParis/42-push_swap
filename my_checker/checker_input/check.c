/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:14:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 12:09:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

void	lastchk(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == ' ' && str[i + 1] == '0' && str[i + 2] != ' ')
			str[i + 1] = ' ';
		i++;
	}
}

char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i)
{
	int	len;

	del_zeros(clean_str);
	while (clean_str[i])
	{
		findstr = str_to_find(&clean_str[i]);
		len = (int)ft_strlen(findstr);
		i = i + len;
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
	lastchk(clean_str);
	return (clean_str);
}

int	is_over_int_limits(char *str)
{
	int			i;
	int			j;
	char		nbr[BUFFER];
	long int	chk_nbr;

	i = -1;
	chk_nbr = 0;
	while (str[++i])
	{
		j = 0;
		while (str[i] != ' ')
		{
			nbr[j] = str[i];
			i++;
			j++;
		}
		nbr[j] = '\0';
		if (ft_strlen(nbr) > 9)
		{
			chk_nbr = ft_atol(nbr);
			if ((ft_strlen(nbr) > 11) || chk_nbr > MAX_INT || chk_nbr < MIN_INT)
				return (1);
		}
	}
	return (0);
}

int	is_sign_error(char *input_str)
{
	int	i;

	i = 0;
	if (!input_str)
		return (1);
	while (input_str[i])
	{
		if (input_str[i] == '-' || input_str[i] == '+')
		{
			if (i > 1)
			{
				if (input_str[i - 1] != ' ')
					return (1);
			}	
		}
		i++;
	}
	return (0);
}
