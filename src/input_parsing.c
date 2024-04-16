/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 21:34:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*input_parsing(int argc, char *argv[])
{
	char	*input_str;
	char	*clean_str;
	char	*findstr;
	int		nb_args;
	int		i;

	i = 0;
	nb_args = 0;
	findstr = 0;
	input_str = join_args(argc, argv);
	clean_str = cleanzero(input_str);
	if (!clean_str)
	{
		free(input_str);
		return (free(clean_str), NULL);
	}
	if (!is_args_numbers(clean_str, &nb_args))
	{
		free(input_str);
		return (free(clean_str), NULL);
	}
	clean_str = ft_check_str_for_doubles(clean_str, findstr, i);
	free(input_str);
	return (clean_str);
}

char	*join_args(int argc, char *argv[])
{
	char	*str;
	char	*tmp;
	char	*tmp2;
	int		i;

	i = argc - 1;
	str = NULL;
	tmp = NULL;
	while (i > 0)
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

char	*str_to_find(char *str)
{
	int		i;
	int		j;
	char	buffer[BUFFER];
	char	*return_str;

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

int	is_args_numbers(char *str, int *nb_args)
{
	int	i;
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

int	is_args_double(char *s, char *f)
{
	int	i[3];

	i[0] = 0;
	i[2] = -1;
	if (!f)
		return (0);
	while (s && s[i[0]])
	{
		i[1] = 0;
		while (f[i[1]] == s[i[0]])
		{
			if (f[i[1] + 1] == '\0' && (s[i[0] + 1] == ' '
					|| s[i[0] + 1] == '\0'))
			{
				i[2]++;
				break ;
			}
			i[0]++;
			i[1]++;
		}
		while (s[i[0]] != ' ')
			i[0]++;
		i[0]++;
	}
	return (i[2]);
}
// str = input_parsing(argc, argv);
	// if (str == NULL)
	// 	return (ft_putstr_fd("Error\n", 1), 1);
	// if (is_over_int_limits(str))
	// {
	// 	free(str);
	// 	return (ft_putstr_fd("Error\n", 1), 1);
	// }
	// tab_str = ft_split(str, ' ');