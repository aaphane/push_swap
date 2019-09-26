/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:42:19 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/07 06:18:01 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void	another_one(char **temp, int *namba, int *k)
{
	int j;

	j = 0;
	while (temp[j])
	{
		if (ft_validnumber(temp[j]) == 0 && ft_numboverflow(temp[j]) == 0)
		{
			namba[(*k)++] = ft_atoi(temp[j++]);
			while (!temp[j] && j > 0)
			{
				j--;
				ft_strdel(&temp[j]);
			}
		}
		else
		{
			free(namba);
			exit(0);
		}
	}
	free(temp);
}

void	printoutput(char *line, t_node *stack_a, t_node *stack_b)
{
	while (get_next_line(0, &line) == 1)
	{
		if (ft_validcommand(line) == 0)
			ft_app_instructions(line, &stack_a, &stack_b);
		else
		{
			ft_putendl("ERROR: Invalid Command");
			exit(0);
		}
		free(line);
	}
	if ((ft_sort_list(&stack_a) == 0) && !(stack_b))
		ft_putendl("OK");
	else
		ft_putendl("KO");
}

void	numbercheck(int argc, char **argv, int *namba)
{
	int		i;
	int		k;
	char	**temp;

	i = 1;
	k = 0;
	while (argc > i)
	{
		if (ft_strcmp(argv[i], "") == 0 || ft_strcmp(argv[i], " ") == 0)
			exit(0);
		temp = ft_strsplit(argv[i], ' ');
		another_one(temp, namba, &k);
		i++;
	}
}

int		return_k(int argc, char **argv, int *namba)
{
	int		i;
	int		k;
	char	**temp;

	i = 1;
	k = 0;
	while (argc > i)
	{
		temp = ft_strsplit(argv[i], ' ');
		another_one(temp, namba, &k);
		i++;
	}
	return (k);
}

int		main(int argc, char *argv[])
{
	int		*namba;
	int		k;
	t_node	*stack_a;
	t_node	*stack_b;
	char	*line;

	line = NULL;
	stack_a = NULL;
	stack_b = NULL;
	namba = (int *)malloc(sizeof(int) * (argc - 1));
	if (argc > 1)
	{
		numbercheck(argc, argv, namba);
		k = return_k(argc, argv, namba);
		if (ft_duplicatenum(namba, k) == -1)
		{
			free(namba);
			exit(0);
		}
		ft_add_to_stack(namba, k, &stack_a);
		free(namba);
		printoutput(line, stack_a, stack_b);
	}
	return (0);
}
