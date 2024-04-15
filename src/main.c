/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:08:40 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/15 13:21:59 by nrobinso         ###   ########.fr       */
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

int	is_args_double(char *str, char *find)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (str && str[i])
	{
		while (str[i] == find[j])
		{
			i++;
			j++;
			if ((find[j] == '\0') && ((str[i] == ' ') || (str[i] == '\0')))
			{
				count++;
				break ;
			}
		}
		j = 0;
		while (str[i] != ' ')
			i++;
		i++;
	}
	if (count == 1)
		count = 0;
	return (count);
}

char *str_to_find(char *str)
{
	int i;
	int j;
	char buffer[100];
	char *return_str;

	i = 0;
	j = 0;
	while (str[i] != ' ')
	{
		buffer[j] = str[i];
		j++;
		i++;
	}
	buffer[j] = '\0';
	i++;
	return_str = ft_strdup(buffer);
	return (return_str);
}



char *cleanzero(char *str)
{
	int i;
	int j;
	char buffer[100];
	char *ret_str;

	i = 0;
	j = 0;
	while (str && str[i] == '0')
		i++;
	if (str[i] == ' ')
		i--;
	while (str && str[i])
	{
		if (str[i] == ' ' && str[i + 1] == '0')
		{
			i++;
			while (str[i] == '0')
				i++;
			if ((str[i - 1] == '0' && str[i] == ' ' ) || str[i + 1] == '0' || str[i + 1] == '\0')
				i--;
			buffer[j] = ' ';
			j++;	
		}
		buffer[j] = str[i];
		i++;
		j++;
	}
	buffer[j] = '\0';
	ret_str = ft_strdup(buffer);	
	return (ret_str);	
}




int main(int argc, char *argv[])
{
	char *str;
	char *clean_zero;
	char *findstr;
	int	 nb_args;
	int i;

	i = 0;
	if (argc < 2)
		return (ft_putstr_fd("Error\n", 1),1);
	nb_args = 0;
	str = join_args(argc, argv);

	printf("str : %s\n", str);

	clean_zero = cleanzero(str); 
	printf("str : %s\n", clean_zero);


	


	
	
	if (!is_args_numbers(clean_zero, &nb_args))
	{
		free(str);	
		return (ft_putstr_fd("Error\n", 1),1);
	}

	
	findstr = str_to_find(&clean_zero[i]);
	printf("%s\n", findstr);
	if (is_args_double(clean_zero, findstr))
		printf("double\n");
	else
		printf("ok no double\n");
	
	
	







//	tab = ft_split(str, ' ');
//	printf("nb : %s\n", findstr);



	free(findstr);
	free(str);
	return (0);
}