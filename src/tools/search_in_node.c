/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_in_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:02:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/24 14:47:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	find_min_val_pos(int *p, int argc)
{
	int	i;
	int	min;
	int	pos;

	min = p[0];
	pos = 0;
	i = 0;
	while (i < argc - 1)
	{
		if (p[i] < min)
		{
			min = p[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	find_max_val_pos(int *p, int argc)
{
	int	i;
	int	max;
	int	pos;

	max = p[0];
	pos = 0;
	i = 0;
	while (i < argc - 1)
	{
		if (p[i] > max)
		{
			max = p[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	find_max_val(int *p, int argc)
{
	int	i;
	int	max;

	max = p[0];
	i = 0;
	while (i < argc - 1)
	{
		if (p[i] > max)
		{
			max = p[i];
		}
		i++;
	}
	return (max);
}

int	find_min_val(int *p, int argc)
{
	int	i;
	int	min;

	min = p[0];
	i = 0;
	while (i < argc - 1)
	{
		if (p[i] < min)
		{
			min = p[i];
		}
		i++;
	}
	return (min);
}
