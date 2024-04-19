/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:53:05 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/19 10:18:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rotate(t_stack **stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *new;

    if (!stack)
        return (0);
    if ((ft_lstsizenode(*stack)) < 2)
        return (0);
    first = (*stack);
    new = (*stack)->next;
    last = ft_lstlastnode(*stack);
    last-> next = first;
    first -> next = NULL;
    (*stack) = new;
    return (1);
}


void    ra(t_stack **stack_a)
{
    if (!stack_a)
        return ;
    if (rotate(stack_a))
        ft_printf("ra\n");
}

void    rb(t_stack **stack_b)
{
    if (!stack_b)
        return ;
    if (rotate(stack_b))
        ft_printf("rb\n");
}

void    rr(t_stack **stack_a, t_stack **stack_b)
{
    if (!stack_a || !stack_b)
        return ;
    if (rotate(stack_a) && (rotate(stack_b)))
        ft_printf("rr\n");
    
}
