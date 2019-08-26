/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:19:27 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/23 11:19:29 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int 		main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int *namba;
	int size;
	char **temp;
	t_node *current;
	t_node *stack_a = NULL;
	t_node *stack_b = NULL;

	i = 1;
	k = 0;
	size = 0;

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
			exit(0);
		}
		i = 0;
		ft_add_to_stack(namba, k, &stack_a);
		free(namba);
		ft_strdel(temp);
		//ft_sort_two(&stack_a);
		ft_sort_four(&stack_a, &stack_b);
		ft_putendl("\n\nStack A\n");
		ft_print_list(&stack_a);
		ft_putendl("\nStack B\n");
		ft_print_list(&stack_b);
	}
	return(0);
}