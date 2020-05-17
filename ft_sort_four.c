/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:39:51 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/04 14:00:50 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void	ft_four_things(t_node **stack_a, t_node **stack_b)
{
	ft_sort_three(stack_a);
	ft_push_to_stack(stack_a, ft_pop(stack_b));
	ft_putendl("pa");
}

void	ft_sort_four(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;
	int		median;
	int		size;
	int		i;

	current = NULL;
	current = *stack_a;
	size = ft_list_size(stack_a);
	i = 1;
	median = ft_median(stack_a, size);
	while (i++ <= (size))
	{
		current = *stack_a;
		if (current->x < median)
		{
			ft_push_to_stack(stack_b, ft_pop(stack_a));
			ft_putendl("pb");
		}
		else
		{
			ft_rotate(stack_a);
			ft_putendl("ra");
		}
	}
	ft_four_things(stack_a, stack_b);
}
