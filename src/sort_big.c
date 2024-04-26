/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/26 10:23:02 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void sort_big_nbr(t_stack **a, t_stack **b, int nb_elements, unsigned int index, unsigned int multiply) 
{
    t_stack **tmp;
    unsigned int i = 0;
    unsigned int nbr = 0;
    tmp = a;
    if (!*a)
        return ;
    while (i < (unsigned int)nb_elements) {
        while (tmp && i < (unsigned int)nb_elements) 
        {
            nbr = (*tmp)->id %(10 * multiply);
            if ((nbr / multiply)== index)
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




void sort_big_nbr2(t_stack **a, t_stack **b, int nb_elements, unsigned int index, unsigned int multiply) 
{
    t_stack **tmp;
    unsigned int i = 0;
    unsigned int nbr = 0;
    tmp = b;
    if (!*b)
        return ;
    while (i < (unsigned int)nb_elements) {
        while (tmp && i < (unsigned int)nb_elements) 
        {
            nbr = (*tmp)->id %(10 * multiply);
            if ((nbr / multiply)== index)
            {
                pa(a, tmp);
                break;
            }
            else
            {
                if ((*tmp)->next != NULL)
                {
                    rb(b);
                    tmp = &(*tmp)->next;
                }  
                break ;
            }
            
        }
        if ((*b))
            tmp = &(*b); 
        else
            tmp = 0;
        i++;
    }
}



void sort_big(t_stack **a, t_stack **b, int nb_elements) 
{
    unsigned int i = 0;
    unsigned int in = 9;
    unsigned int n = 1;
    //unsigned int loop = 1;

    while (in > 0)
    {
        i = 0;
        while (i < 10)
        {
            sort_big_nbr(a, b, nb_elements, in, n);
            i++;
        
        }
        in--;
    }

	print_stack(b, 'b');
    
    in = 9;
   
    while (in > 0)
    {
        i = 0;
        while (i < 10)
        {
            sort_big_nbr2(a, b, nb_elements, in, n);
            i++;
        
        }
        in--;
    }

    
    // n = i;
    // while (n > 1)
    // {
	//     pa(a,b);
    //     n--;
    // }
	
	print_stack(a, 'M');
	print_stack(b, 'b');

    
}
    
    
    

    

