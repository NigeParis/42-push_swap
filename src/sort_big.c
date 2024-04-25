/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/25 12:21:12 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void sort_big_nbr(t_stack **a, t_stack **b, int nb_elements, unsigned int index) 
{
    t_stack **tmp;
    unsigned int i = 0;
    unsigned int nbr = 0;
    //unsigned int nb2 = 0;
    tmp = a;
    //print_stack(a, 'B');
    if (!*a)
        return ;
    while (i < (unsigned int)nb_elements) {
        while (tmp && i < (unsigned int)nb_elements) 
        {
            nbr = (*tmp)->id % 10;
           // nb2 = (*tmp)->id % 100;
         //   ft_printf("if %u here %u\n", index, (*tmp)->id % 10);
            //ft_printf("num:%u %%%u\n",(*tmp)->id, nbr);

            
            if (nbr == index)
            {
                pb(tmp, b);
                break;
            }
            else
            {
                if ((*tmp)->next != NULL)
                {
                    ra(a);
                    tmp = &(*tmp)->next;
                }  
                break ;
            }
            
        }
        if ((*a))
            tmp = &(*a); 
        else
            tmp = 0;
        i++;
    }
}




void sort_big(t_stack **a, t_stack **b, int nb_elements) 
{
    sort_big_nbr(a, b, nb_elements, 0);
    sort_big_nbr(a, b, nb_elements, 1);
    sort_big_nbr(a, b, nb_elements, 2);
    sort_big_nbr(a, b, nb_elements, 3);
    sort_big_nbr(a, b, nb_elements, 4);
    sort_big_nbr(a, b, nb_elements, 5);
    sort_big_nbr(a, b, nb_elements, 6);
    sort_big_nbr(a, b, nb_elements, 7);
    sort_big_nbr(a, b, nb_elements, 8);
    sort_big_nbr(a, b, nb_elements, 9);
    
   
}

