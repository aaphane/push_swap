/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 07:29:44 by aaphane           #+#    #+#             */
/*   Updated: 2019/10/01 02:41:14 by aaphane          ###   ########.fr       */
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

void	sort_them(t_node **stack_a, t_node **stack_b, int k)
{
	if (k == 3)
		ft_sort_three(stack_a);
	else if (k == 5)
	{
		if (ft_sort_list(stack_a) == 0)
			return ;
		else
			ft_sort_five(stack_a, stack_b);
	}
	else if (k > 5 && k <= 100)
		sort_hundred(stack_a, stack_b);
	else if (k > 100 && k <= 500)
		sort_fafandred(stack_a, stack_b);
	else
		return ;
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
	char	*line;
	t_node	*stack_a;
	t_node	*stack_b;

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
		sort_them(&stack_a, &stack_b, k);
	}
	return (0);
}
