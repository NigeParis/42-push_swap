/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:45:04 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/17 00:03:52 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	input;
	int		print_size;
	size_t	i;

	i = 0;
	print_size = 0;
	if (!str)
		return (-1);
	va_start(input, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			print_size += ft_formatcheck(&input, str[i]);
		}
		else
		{
			print_size++;
			ft_printf_char(str[i]);
		}
		i++;
	}
	va_end(input);
	return (print_size);
}
