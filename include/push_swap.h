/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/21 16:54:07 by nrobinso         ###   ########.fr       */
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

typedef struct s_stack
{
	int				id;
	int				valeur;
	struct s_stack	*next;
}	t_stack;

char	*join_args(int argc, char *argv[]);
char	*input_parsing(int i, int argc, char *argv[]);
char	*str_to_find(char *str);
char	*ft_check_str_for_doubles(char *clean_str, char *findstr, int i);
int		is_args_numbers(char *str, int *nb_args);
int		is_args_double(char *s, char *f);
int		is_over_int_limits(char *str);
int		is_sign_error(char *input_str);
char	**data_parsing(int argc, char *argv[]);
int		ft_print_data(char **tab_str);
char	*cleanzero(char *str);
char	*cleanzero_helper(char *str, char flag, int i, int j);
void	ft_delzero(char *str, char *buffer, int i, int j);
void	del_zeros(char *str);
void	del_zeros_helper(char *str, int flag, int j, int y);
int		free_msg(t_stack **stack_a, t_stack **stack_b, int action, char *msg);

// list tools - creation stack
int		ft_lstsizenode(t_stack *lst);
void	ft_lstaddnode_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlastnode(t_stack *lst);
void	ft_lstaddnode_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstnewnode(int content, int id);

// stack tools - stack a
t_stack	**getstack_a(int i, int argc, char *argv[]);
void	getstack_error(int chx, char **tab_str, t_stack **ptr_stack_a);
void	clear_stack(t_stack **stack);
int		print_stack(t_stack **stack, char c);
int		is_stack_sorted(t_stack **a);
int		find_min_val_pos(int *p, int argc);
int		find_max_val_pos(int *p, int argc);



//sort - push tools
void    sa(t_stack **stack);
void    sb(t_stack **stack);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		rev_rotate(t_stack **stack);
int 	rotate(t_stack **stack);
int		swap(t_stack **stack);
int		push(t_stack **stack_dst, t_stack **stack);
void    del_node(t_stack **stack);

//sort - algo
void	small_sort(t_stack **a, int argc);
int		four_sort(t_stack **a, t_stack **b, int argc, int *p);
int		five_sort(t_stack **a, t_stack **b, int argc);
void	update_node_id(t_stack **stack);

//four - sort - solutions

void	axxx(t_stack **a, t_stack **b, int *p);
void	xaxx(t_stack **a, t_stack **b, int *p);
void	xxax(t_stack **a, t_stack **b, int *p);
void	xxxa(t_stack **a, t_stack **b, int *p);

void	abdc(t_stack **a, t_stack **b, int *p);
void 	acbd(t_stack **a, t_stack **b, int *p);
void 	acdb(t_stack **a, t_stack **b, int *p);
void 	adbc(t_stack **a, t_stack **b, int *p);
void 	adcb(t_stack **a, t_stack **b, int *p);

void 	bacd(t_stack **a, t_stack **b, int *p);
void 	badc(t_stack **a, t_stack **b, int *p);
void 	bcad(t_stack **a, t_stack **b, int *p);
void 	bcda(t_stack **a, t_stack **b, int *p);
void 	bdac(t_stack **a, t_stack **b, int *p);
void 	bdca(t_stack **a, t_stack **b, int *p);

void 	cabd(t_stack **a, t_stack **b, int *p);
void 	cadb(t_stack **a, t_stack **b, int *p);
void 	cbad(t_stack **a, t_stack **b, int *p);
void 	cbda(t_stack **a, t_stack **b, int *p);
void 	cdab(t_stack **a, t_stack **b, int *p);
void 	cdba(t_stack **a, t_stack **b, int *p);

void 	dabc(t_stack **a, t_stack **b, int *p);
void 	dacb(t_stack **a, t_stack **b, int *p);
void 	dbac(t_stack **a, t_stack **b, int *p);
void 	dbca(t_stack **a, t_stack **b, int *p);
void 	dcab(t_stack **a, t_stack **b, int *p);
void 	dcba(t_stack **a, t_stack **b, int *p);

// five_sort
void	sort_pos_four(t_stack **a, t_stack **b, int argc, int *p);
void	sort_pos_three(t_stack **a, t_stack **b, int argc, int *p);
void	sort_pos_two(t_stack **a, t_stack **b, int argc, int *p);
void	sort_pos_one(t_stack **a, t_stack **b, int argc, int *p);
void	sort_pos_zero(t_stack **a, t_stack **b, int argc, int *p);


#endif
