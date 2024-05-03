/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:17:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/03 10:29:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void sort(t_stack **a, t_stack **b, int nb_nodes, int multiply) 
// {
//     t_stack *tmp;
// 	unsigned int nbr;
// 	unsigned int j = 0;
// 	int y;

//     unsigned int i = 0;

//     tmp = *a;

//     if (!tmp)
//         return;

//     while (i < 10) 
//     {
// 		y = 0;
//         while ((y < nb_nodes) && (*a))
//         {
//         	tmp = *a;

//             nbr = (tmp->id %(10 * multiply)) / multiply;
//             if (j == nbr)
//             	pb(a,b);
// 			else
//                 ra(a);
// 			y++;
//         }
// 		if (j == 9)
// 		{
// 			rra(a);
// 			j = 0;
// 		}
// 		else
//         	j++;
//         i++;
		
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


    // sort(a, b, nb_nodes, 1);
	// while ((*b))
	// 	pa(a,b);
    // sort(a, b, nb_nodes, 10);
	// while ((*b))
	// 	pa(a,b);
    // sort(a, b, nb_nodes, 100);
    sort(a, b, nb_nodes, 0b00000001);
	//print_stack(a, 'A');
	// print_stack(b, 'B');


}

  
    

    
    
    

    

