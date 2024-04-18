/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:21:15 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 17:54:27 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    swap(t_stack **stack)
{
    int nbr1;
    int nbr2;
    int nb_elements;
    t_stack *tmp;
    
    tmp = *stack;
    nb_elements = ft_lstsizenode(*stack);
    if (nb_elements < 2)
        return(0) ;
    nbr1 = tmp->valeur;
    nbr2 = tmp->next->valeur;
    (*stack)->valeur = nbr2;
    (*stack)->next->valeur = nbr1;
    return (1);
}

void    sa(t_stack **stack_a)
{
    if (!stack_a)
        return ;
    if(swap(stack_a))
       printf("sa\n");
}

void    sb(t_stack **stack_b)
{
    if (!stack_b)
        return ;
    if(swap(stack_b))
        printf("sb\n");
}

void    ss(t_stack **stack_a, t_stack **stack_b)
{
    int nb_elements_a;
    int nb_elements_b;

    if (!stack_b || !stack_a)
        return ;
    nb_elements_a = ft_lstsizenode(*stack_a);
    nb_elements_b = ft_lstsizenode(*stack_b);
    if (nb_elements_a < 2 || nb_elements_b < 2)
        return ;
    if((swap(stack_a)) && (swap(stack_b)))    
        printf("ss\n");      
}