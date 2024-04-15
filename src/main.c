/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/14 23:10:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void del_content(void *content)
{
	printf("delone %d\n", *(int *)content);
	content = 0; 
	free(content);
	return ;
}



char *join_args(int argc, char *argv[])
{
	char *str;
	char *tmp;
	char *tmp2;
	int	 i;
	
	i = argc - 1;
	str = NULL;
	tmp = NULL;
	while ( i > 0)
	{
		tmp2 = ft_strjoin(argv[i], " ");
		str = ft_strjoin(tmp2, tmp);
		free(tmp);
		free(tmp2);
		tmp = str;		
		i--;
	}
	return (str);
}


int is_args_numbers(char *str, int *nb_args)
{
	int i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i] == ' ')
		i++;
	while (str && str[i])
	{	
		while (str[i] != ' ')
		{
			if ((str[i] < '0') || (str[i] > '9'))
			{
				sign++;	
				if (((str[i] != '-') && (str[i] != '+')) || sign > 1)				
					return (0);
			}	
			i++;
		}
	*nb_args = *nb_args + 1;
	sign = 0;
	i++;
	}
	return (1);
}





int main(int argc, char *argv[])
{
	char *str;
	char  **tab;
	int	 nb_args;

	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1),1);
	nb_args = 0;
	str = join_args(argc, argv);

	if (!is_args_numbers(str, &nb_args))
	{
		free(str);	
		return (ft_putstr_fd("Error\n", 1),1);
	}

	tab = ft_split(str, ' ');




	
	printf("nb : %s\n", tab[nb_args - 1]);




	free(str);
	return (0);
}