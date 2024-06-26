/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:56:57 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/06 08:56:46 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**  #include <string.h>
* strlen - size_t strlen(const char *s);
*
* The strlen() function computes the length of the string s.  
* The strnlen() function attempts to compute the length of s, 
* but never scans beyond the first maxlen bytes of s.
*
* RETURN VALUES
* The strlen() function returns the number of characters that precede 
* the terminating NUL character.  The strnlen() function returns either the 
* same result as strlen() or maxlen, whichever is smaller.
**/

#include "ft_printf.h"

size_t	ft_printf_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s && *s)
	{
		len++;
		s++;
	}
	return (len);
}
