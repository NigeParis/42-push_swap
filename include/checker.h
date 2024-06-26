/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/06 13:05:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
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
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	unsigned int	id;
	int				new_id;
	int				valeur;
	struct s_stack	*next;
}	t_stack;

char	*join_args(int argc, char *argv[]);
char	*input_parsing(int i, int argc, char *argv[]);
char	*str_to_find(char *str);
void	check_first_arg(char *input_str);
int		check_sign_first_arg(char *input_str);
char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i);
int		is_args_numbers(char *str, int *nb_args);
int		is_args_double(char *s, char *f);
int		is_over_int_limits(char *str);
int		is_sign_error(char *input_str);
char	**data_parsing(int argc, char *argv[]);
char	*cleanzero(char *str);
char	*cleanzero_helper(char *str, char flag, int i, int j);
void	ft_delzero(char *str, char *buffer, int i, int j);
void	del_zeros(char *str);
void	del_zeros_helper(char *str, int flag, int j, int y);
int		free_msg(t_stack **stack_a, t_stack **stack_b, int action, char *msg);

// list tools - creation stack
int		ft_lstsizenode(t_stack *lst);
void	ft_lstaddnode_back(t_stack **lst, t_stack *newnode);
t_stack	*ft_lstlastnode(t_stack *lst);
void	ft_lstaddnode_front(t_stack **lst, t_stack *newnode);
t_stack	*ft_lstnewnode(int content, unsigned int id);

// stack tools - stack a
t_stack	**getstack_a(int i, int argc, char *argv[]);
void	getstack_error(int chx, char **tab_str, t_stack **ptr_stack_a);
void	clear_stack(t_stack **stack);
int		print_stack(t_stack **stack, char c);
int		is_stack_sorted(t_stack **a);
int		find_min_val_pos(int *p, int argc);
int		find_max_val_pos(int *p, int argc);
int		find_max_val(int *p, int argc);
int		find_min_val(int *p, int argc);
void	rev_stack(t_stack **stack);

//sort - node tools
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		rev_rotate(t_stack **stack);
int		rotate(t_stack **stack);
int		swap(t_stack **stack);
int		push(t_stack **stack_dst, t_stack **stack);
void	del_node(t_stack **stack);
void	update_node_id(t_stack **stack);

//checker - functions
int		checker(t_stack **a, t_stack **b, char *action, int **count);
void	action_checker(t_stack **a, t_stack **b, char *action, int **count);
int		is_swap_action(t_stack **a, t_stack **b, char *action);
int		is_rotate_action(t_stack **a, t_stack **b, char *action);
int		is_push_action(t_stack **a, t_stack **b, char *action);
int		is_rev_rotate_action(t_stack **a, t_stack **b, char *action);

#endif
