/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:29:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/10 08:16:48 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_chars(int fd, char *buffer)
{
	char	*line;
	int		nbytes;

	nbytes = 1;
	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	while (nbytes != 0 && !ft_gnl_strchr(buffer, '\n'))
	{
		nbytes = read(fd, line, BUFFER_SIZE);
		if (nbytes == -1)
		{
			return (free(line), NULL);
		}
		line[nbytes] = 0;
		buffer = ft_gnl_strjoin(buffer, line);
	}
	free(line);
	return (buffer);
}

char	*get_line_trim(char *buffer)
{
	char	*trimmed_read;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!buffer[0])
		return (0);
	while (buffer[len] && buffer[len] != '\n')
		len++;
	trimmed_read = malloc(ft_gnl_strlen(buffer) + 2 * sizeof(char));
	while (buffer[i] && buffer[i] != '\n')
	{
		trimmed_read[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		trimmed_read[i] = buffer[i];
		i++;
	}
	trimmed_read[i] = '\0';
	return (trimmed_read);
}

char	*get_leftover(char *buffer)
{
	char	*new_buffer;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free(buffer), NULL);
	if (buffer[i] == '\n')
		i++;
	if (!ft_gnl_strlen(&buffer[i]))
		return (free(buffer), NULL);
	new_buffer = malloc(((ft_gnl_strlen(&buffer[i])) + 1) * sizeof(char));
	if (!new_buffer)
		return (NULL);
	j = 0;
	while (buffer[i])
	{
		new_buffer[j] = buffer[i];
		i++;
		j++;
	}
	new_buffer[j] = '\0';
	return (free(buffer), new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*output;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = get_chars(fd, buffer);
	if (!buffer)
		return (0);
	output = get_line_trim(buffer);
	buffer = get_leftover(buffer);
	return (output);
}
