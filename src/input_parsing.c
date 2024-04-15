/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 17:27:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char *input_parsing(int argc, char *argv[])
{
	char *input_str;
	char *clean_str;
	char *findstr;
	int	 nb_args;
	int i;

	i = 0;
	nb_args = 0;
	findstr = 0;
	input_str = join_args(argc, argv);
	clean_str = cleanzero(input_str); 
	if (!clean_str)
	{
		free(input_str);
		return (free(clean_str),NULL);
	}
	printf("input_str  :'%s'\n", input_str);
	if (!is_args_numbers(clean_str, &nb_args))
	{
		free(input_str);
		return (free(clean_str),NULL);
	}
	clean_str = ft_check_str_for_doubles(clean_str, findstr, i);
	free(input_str);
	return (clean_str);
}

char *join_args(int argc, char *argv[])
{
	char *str;
	char *tmp;
	char *tmp2;
	int	 i;
	
	i = argc - 1;
	str = NULL;
	tmp = NULL;
	while ( i > 0)
	{
		tmp2 = ft_strjoin(argv[i], " ");
		str = ft_strjoin(tmp2, tmp);
		free(tmp);
		free(tmp2);
		tmp = str;		
		i--;
	}
	return (str);
}

char *str_to_find(char *str)
{
	int i;
	int j;
	char buffer[BUFFER];
	char *return_str;

	i = 0;
	j = 0;
	while (str[i] != ' ')
	{
		buffer[j] = str[i];
		j++;
		i++;
	}
	buffer[j] = '\0';
	i++;
	return_str = ft_strdup(buffer);
	return (return_str);
}

int is_args_numbers(char *str, int *nb_args)
{
	int i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i] == ' ')
		i++;
	while (str && str[i])
	{	
		while (str[i] != ' ')
		{
			if ((str[i] < '0') || (str[i] > '9'))
			{
				sign++;	
				if (((str[i] != '-') && (str[i] != '+')) || sign > 1)				
					return (0);
			}	
			i++;
		}
	*nb_args = *nb_args + 1;
	sign = 0;
	i++;
	}
	return (1);
}

int	is_args_double(char *str, char *find)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (str && str[i])
	{
		while (str[i++] == find[j++])
		{
			if ((find[j] == '\0') && ((str[i] == ' ') || (str[i] == '\0')))
			{
				count++;
				break ;
			}
		}
		j = 0;
		while (str[i] != ' ')
			i++;
		i++;
	}
	if (count == 1)
		count = 0;
	return (count);
}
