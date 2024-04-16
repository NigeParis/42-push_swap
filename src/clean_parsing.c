/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:14:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 13:02:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*cleanzero(char *str)
{
	int		i;
	int		j;
	char	*buffer;
	char	*ret_str;

	i = 0;
	j = 0;
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!buffer)
		return (0);
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
			if ((str[i - 1] == '0' && str[i] == ' ' )
				|| str[i + 1] == '0' || str[i + 1] == '\0')
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
	return (clean_str);
}

void	del_zeros(char *str)
{
	int	j;
	int	y;

	j = 0;
	y = 0;
	while (str[j])
	{
		if (j > 1)
		{
			if (str[j - 1] == ' ' && str[j] == '0')
			{
				if (str[j + 1] != ' ')
					j++;
			}	
		}
		str[y] = str[j];
		y++;
		j++;
	}
	str[y] = '\0';
}

int	is_over_int_limits(char *str)
{
	int			i;
	int			j;
	char		nbr[BUFFER];
	long int	chk_nbr;

	i = 0;
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
		if (ft_strlen(nbr) > 10)
		{
			chk_nbr = ft_atoi(nbr);
			if (chk_nbr > 2147483647 || chk_nbr < -2147483648)
				return (1);
		}
	}
	return (0);
}
