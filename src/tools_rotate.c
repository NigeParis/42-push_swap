/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:53:05 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/18 21:34:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *fmp;
    
    fmp = (*stack);
    tmp = fmp;
    tmp -> next = fmp; 
    fmp->next = NULL;
    

    print_stack(&tmp, 't');
    print_stack(&fmp, 'f');

    return (0);
    
}