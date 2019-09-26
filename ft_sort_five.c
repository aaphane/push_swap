/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:52:31 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/05 14:37:58 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void	ft_five_things(t_node **stack_a, t_node **stack_b)
{
	ft_sort_three(stack_a);
	ft_sort_two(stack_b, 0);
	ft_push_to_stack(stack_a, ft_pop(stack_b));
	ft_putendl("pa");
	ft_push_to_stack(stack_a, ft_pop(stack_b));
	ft_putendl("pa");
}

void	ft_sort_five(t_node **stack_a, t_node **stack_b)
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
	ft_five_things(stack_a, stack_b);
}
