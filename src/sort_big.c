/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/26 22:17:26 by nrobinso         ###   ########.fr       */
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

    while (i < (unsigned int)nb_elements) 
    {
        while (tmp && i < (unsigned int)nb_elements) 
        {
            nbr = (*tmp)->id %(10 * multiply);
            if ((nbr / multiply)== index)
            {
  //              ft_printf("Stack A - multiply: %u nbr:%u  index: %u   id:%u  char: %u\n",multiply, (nbr / multiply), index, (*tmp)->id, (*tmp)->id %10 *multiply);
            
                pb(tmp, b);
                print_stack(tmp, 'T');
                print_stack(b, 'B');
                break;
            }
            else
            {
                //ft_printf("%u\n", (nbr / multiply));
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







void sort_big(t_stack **a, t_stack **b, unsigned int stack_size) 
{
    int i = 0;
    int count = 0;
    unsigned int multiply = 1;
    int nb_elements = stack_size - 1;    ft_printf("END\n");

    int in = 0;
    //unsigned int loop = 1;
    ft_printf("nb_elements = %u\n", nb_elements);
	print_stack(a, 'Z');


    while (count < 2)
    {
        while (in < 10)
        {
            i = 0;
            while (i < nb_elements)
            {
                sort_big_nbr(a, b, nb_elements, in, multiply);
                i++;
                rra(a);
            
            }
            in++;
        }
        ft_printf("END stack A----------------------------------\n");

    	print_stack(b, 'B');
        print_stack(a, 'a');
        // //rev_stack(b);
	    // print_stack(b, 'b');
    
        i = 0;
        while (i <= nb_elements )
        {
            pa(a, b);
            i++;
        
        }
    

        i = 0;
        in = 0;    
        ft_printf("END stack B---------------->>>>\n");
        if (a || *a)
            multiply = multiply * 10;
        count++;
        print_stack(b, 'B');
        print_stack(a, 'a');
    }

}

  
    

    
    
    

    

