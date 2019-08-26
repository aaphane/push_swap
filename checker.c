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

int main(int argc, char *argv[])
{
		int i;
		int j;
		int k;
		int *namba;
		char *line;
		char **temp;
		t_node *stack_a = NULL;
		t_node *stack_b = NULL;

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
										namba[k] = ft_atoi(temp[j]);
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
				ft_putendl("\nInput command and use -1 to get outcome outcome:\n");
				while (get_next_line(0, &line) == 1)
				{
						if (ft_validcommand(line) == 0)
						{

								ft_apply_instructions(line, &stack_a, &stack_b);
						}
				}
				if ((ft_sort_list(&stack_a)) && !(stack_b))
						ft_putendl("OK");
				else
					ft_putendl("KO");
		}
		else
			ft_putendl("ERROR: Invalid command");
return (0);
}
