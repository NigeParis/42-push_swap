/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_zero_parsing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:35:20 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 16:38:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*cleanzero(char *str)
{
	int		i;
	int 	start;
	char 	flag;

	i = 0;
	while (str && str[i])
	{
		flag = 0;
		if (str[i] == '-')
		{	
			start = i;	
			flag++;
			i++;
		
		while (str[i] == '0' && flag)	
			i++;
		if (str[i] == ' ' && flag)
			str[start] = '0';
		}
		i++;
	}
	str  = cleanzero_helper(str, 0, 0, 0);
	return (str);
}

char	*cleanzero_helper(char *str, char flag, int i, int j)
{
	char	*buffer;
	char	*ret_str;

	buffer = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!buffer)
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		flag = str[i];
		i++;	
	}
	while (str && str[i] == '0')
		i++;
	if (flag == '-')
	{
		i--;
		str[i] = flag;
	}	
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

void	del_zeros(char *str)
{
	int	j;
	int	y;
	int flag;

	j = 0;
	y = 0;
	flag = 0;
	del_zeros_helper(str, flag, j, y);
	printf("string %s\n", str);
}

void	del_zeros_helper(char *str, int flag, int j, int y)
{
	while (str && str[j])
	{
		if (j > 1)
		{
			if (str[j] == '+')
			{
				flag = 1;
				j++;
			}
			if (str[j] == '-')
			{
				str[y] = str[j];
				y++;
				j++;
				flag = 1;
			}	
			while (str[j] == '0' && flag)
				j++;
			if (str[j] == ' ' && flag)
				j--;		
		}
		flag = 0;
		str[y++] = str[j++];
	}
	str[y] = '\0';
}