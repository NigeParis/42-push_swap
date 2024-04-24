/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/25 00:58:33 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void    sort_big (t_stack **a, t_stack **b, int nb_elements)
// {
//     t_stack *tmp;
//     //t_stack *begin;
//     unsigned int i = 0;
//     unsigned int nbr = 0;

//     tmp = *a; 
//     //begin = *a;
//     ft_printf("------>nb_elements %d\n", nb_elements);



//     while (i < (unsigned int)nb_elements - 1)
//     {
    
//         while (tmp)
//         {
        

//             ft_printf("--%u----%u-->%u\n", tmp->id, i, (tmp->id %10));

//             nbr = tmp->id %10;    
//             if (nbr == 0)
//                 pb(&tmp, b);
    
//             if (tmp->next == NULL)
//                 break ;
//             tmp = tmp->next;
          
//         }
//         ft_printf("\n");
//         (*a) = tmp; 
//         //tmp = begin->next; 
     
//         i++;
//     }
// }


void sort_big(t_stack **a, t_stack **b, int nb_elements) 
{
    t_stack *tmp = *a;
    unsigned int i = 0;
    unsigned int nbr = 0;
    //unsigned int nb = 0;

    while (i < (unsigned int)nb_elements) {
        while (tmp) {
            
            if ((nbr == 0) && (tmp->id))
            {
                nbr = tmp->id % 10;
                ft_printf("--%u-- %u--%u-->%u\n", tmp->id, nbr, i, (tmp->id %10));
                pb(a, b);
                tmp = (*a)->next;
                nbr = tmp->id % 10;
                break;
            }
            tmp = tmp->next;
        }
        tmp = (*a); 
        i++;
    }
}

