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

#include "libft/libft.h"
#include "push.h"
#include "sa.c"

int ft_validnumber(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (((ft_isdigit(str[i])) != 1))
			return (-1);
		i++;
	}
	return (0);
}

int ft_numboverflow(char *str)
{
	int ai;
	long long all;

	ai = ft_atoi(str);
	all = ft_atoll(str);
	if (ai == all)
		return (0);
	else
	{
		return (-1);
	}
}

int ft_validcommand(char *str)
{
	int i;
	int j;
	char **command;

	j = 0;
	i = 0;

	str = "sa sb ss pa pb ra rb  rr  rra rrb rrr";

	command = ft_strsplit(str, ' ');

	while (command[i])
	{
		if (ft_strcmp(command[i], str) == 0)
			return (-1);
		i++;
	}
	return (0);
}

int ft_duplicatenum(int *arr, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[j] == arr[i] && i != j)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}


int main(int argc, char *argv[])
{

	int i;
	int j;
	int k;
	int *namba;
	char **temp;
	t_node *stack_a;

	i = 1;
	k = 0;

	namba = (int *)malloc(sizeof(int) * (argc - 1));
	if (argc > 1)
	{
		while (argc > i)
		{
			temp = ft_strsplit(argv[i], ' ');
			j = 0;
			while (temp[j])
			{
				if (ft_validnumber(temp[j]) == 0 && ft_numboverflow(temp[j]) == 0)
				{
					namba[k] = ft_atoi(temp[j]);
				}
				else
				{
					free(namba);
					ft_putstr("\033[0;31m");
					ft_putstr("ERROR\n");
					exit(0);
				}
				j++;
				k++;
			}
			i++;
		}
		if (ft_duplicatenum(namba, k) == -1)
		{
			free(namba);
			ft_putstr("\033[0;31m");
			ft_putstr("ERROR\n");
			exit(0);
		}
		i = 0;
		ft_putchar('\n');
		ft_putstr("\033[0;32m");
		ft_putstr("Stack A\tStack B");
		ft_putchar('\n');
		ft_putchar('\n');
		ft_add_to_stack(namba, k, &stack_a);
		ft_strdel(temp);
		ft_putstr("\033[0;33m");
		ft_print_list(stack_a);
		sa(stack_a);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_print_list(stack_a);

	}
	return (0);
}
