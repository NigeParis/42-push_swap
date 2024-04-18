/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:21:15 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 17:19:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    swap(t_stack **stack)
{
    int nbr1;
    int nbr2;
    int nb_elements;
    t_stack *tmp;
    
    tmp = *stack;
    nb_elements = ft_lstsizenode(*stack);
    if (nb_elements < 2)
        return ;
    nbr1 = tmp->valeur;
    nbr2 = tmp->next->valeur;
    (*stack)->valeur = nbr2;
    (*stack)->next->valeur = nbr1;
}

void    sa(t_stack **stack_a)
{
    if (!stack_a)
        return ;
    swap(stack_a);
    printf("sa\n");
}