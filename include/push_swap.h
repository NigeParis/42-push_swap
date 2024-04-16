/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/16 21:48:56 by nrobinso         ###   ########.fr       */
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

typedef struct s_stack_a
{
	unsigned int		id;
	int					valeur;
	struct s_stack_a	*next;
}	t_stack_a;

typedef struct s_stack_b
{
	unsigned int		id;
	int					valeur;
	struct s_stack_b	*next;
}	t_stack_b;

char	*input_parsing(int argc, char *argv[]);
char	*join_args(int argc, char *argv[]);
char	*str_to_find(char *str);
int		is_args_numbers(char *str, int *nb_args);
int		is_args_double(char *s, char *f);
char	*cleanzero(char *str);
char	*cleanzero_helper(char *str, char flag, int i, int j);
void	ft_delzero(char *str, char *buffer, int i, int j);
void	del_zeros(char *str);
void	del_zeros_helper(char *str, int flag, int j, int y);
char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i);
int		is_over_int_limits(char *str);
char	**data_parsing(int argc, char *argv[]);
int		ft_print_data(char **tab_str);



#endif
