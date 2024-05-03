/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/03 08:20:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void sort_big_nbr(t_stack **a, t_stack **b, int nb_nodes) 
// {
//     t_stack *tmp;
//     (void) b;

//     unsigned int i = 0;

//     tmp = *a;

//     if (!tmp)
//         return;

//     while (i < 1) 
//     {

//         while (tmp != NULL)
//         {
//             ft_printf("i: %u val: %u nbr_ele: %d\n", i, tmp->valeur, nb_nodes);
            
//             if (!(1 << tmp->id))
//                 pb(a,b);
//             else
//                 ra(a);
            

//             if (tmp->next != NULL)
//                 tmp = tmp->next;
//             else
//                 break;
//         }
        
//         tmp = *a;
//         i++;
//         ft_printf("\n");
//     }
// }



void	sort(t_stack **a, t_stack **b, unsigned int nodes, unsigned int mask)
{
	t_stack	*tmp;
	unsigned int    bit_pos;
	unsigned int	node_pos;
	unsigned int	size_in_bits;
	
	bit_pos = 0;
	tmp = *a;
	nodes = ft_lstsizenode(tmp);
	size_in_bits = sizeof(unsigned int) * 8;
	while (bit_pos < size_in_bits)
	{
		node_pos = 0;
		while (node_pos < nodes)
		{
		    tmp = *a;
			if (((tmp->id >> bit_pos) & mask) == 1)
				ra(a);
			else
				pb(a, b);
            node_pos++;
		}
		while (ft_lstsizenode(*b) != 0)
			pa(a, b);
		bit_pos++;
	}
}




void sort_big(t_stack **a, t_stack **b, unsigned int stack_size) 
{
    int nb_nodes = stack_size - 1;


    sort(a, b, nb_nodes, 0b00000001);
	print_stack(a, 'A');
	print_stack(b, 'B');


}

  
    

    
    
    

    

