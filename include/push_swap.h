/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 17:02:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/types.h>
# include "../libft/libft.h"
# include "../ft_printf/src/ft_printf.h"
# include "../get_next_line/get_next_line_bonus.h"
# define BUFFER 10000

typedef struct s_a
{
	int		i;

}	t_a;

typedef struct s_b
{
	int		i;

}	t_b;

char	*input_parsing(int argc, char *argv[]);
char	*join_args(int argc, char *argv[]);
char	*str_to_find(char *str);
int		is_args_numbers(char *str, int *nb_args);
int		is_args_double(char *str, char *find);
char	*cleanzero(char *str);
void	ft_delzero(char *str, char *buffer, int i, int j);
char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i);


#endif
