/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:42:19 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/06 13:57:23 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/libft.h"
#include "includes/stack.c"

typedef struct s_node
{
	int x;
	struct s_node *next;
	struct s_node *prev;
}   t_node;

int		ft_validnumber(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while(str[i])
	{
		if(((ft_isdigit(str[i])) != 1))
			return(0); //not fine
		i++;
	}
	return(1);
}


int		ft_numboverflow(long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return(1);
	else
	{
		return(0);
	}

}

int		ft_validcommand(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	char *command[] = {"sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr"}; //norm

	while(command[i])
	{
		if (ft_strcmp(command[i], str) == 0)
			return(1);
		i++;
	}
	return(0);
}

int		ft_duplicatenum(int arr[])
{
	int i;
	int j;

	i = 0;
	while(arr[i]) //error...i < array_size
	{
		j = i + 1;
		while(arr[j]) //same
		{
			if (arr[j] == arr[i] && i != j)
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}


int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		namba;  //int *namba = malloc
	char 	**temp;
	t_node	**stack_a;


	i = 1;
	if(argc > 1)
	{
		while(argc > i)
		{
			temp = ft_strsplit(argv[i], ' ');
			j = 0;
			while (temp[j])
			{
				if(ft_validnumber(temp[j]))
				{
					namba = ft_atoi(temp[j]); //namba[k]
					ft_first_stack(&namba, stack_a);
				}
				else
				{
					if (!(stack_a))
						ft_putstr("Invalid number"); //Error\n fd = 2
					else
					{
						ft_memdel(stack_a);
						ft_putstr("Invalid number"); //Error\n fd = 2

					}
				}
				j++;
			}
			i++;
		}
		ft_strdel(temp);
	}
	return(0);
}

