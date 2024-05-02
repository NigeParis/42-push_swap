/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/02 18:28:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_big_nbr(t_stack **a, t_stack **b, int nb_elements) 
{
    t_stack *tmp;
    t_stack *smp;
    (void) b;

    unsigned int i = 0;

    tmp = *a;
    smp = *a;

    if (!tmp)
        return;

    while (i < 10) 
    {
        tmp = smp->next;

        while (tmp != NULL)
        {
            ft_printf("i: %u val: %u nbr_ele: %d\n", i, tmp->valeur, nb_elements);
            
            if (tmp->id == i)
                pb(&tmp,b);
            

            if (tmp->next != NULL)
                tmp = tmp->next;
            else
                break;
        }
        
        tmp = *a;
        i++;
        ft_printf("\n");
    }
}


void sort_big(t_stack **a, t_stack **b, unsigned int stack_size) 
{
    int nb_elements = stack_size - 1;    ft_printf("END\n");

    //unsigned int loop = 1;
    ft_printf("nb_elements = %u\n", nb_elements);
	print_stack(a, 'Z');


    sort_big_nbr(a, b, nb_elements);



}

  
    

    
    
    

    

