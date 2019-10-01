/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_wanandred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 23:24:40 by ftvuser           #+#    #+#             */
/*   Updated: 2019/10/01 02:59:02 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

#include "libft/libft.h"

void		intv(t_node **stack_a, t_node **stack_b, int min, int max)
{
	t_node		*current;
	t_node		*current2;
	int			nbr;

	current = *stack_a;
	while (current != NULL)
	{
		if ((current->x >= min) && (current->x <= max))
		{
			nbr = current->x;
			current2 = *stack_a;
			while (current2->x != nbr)
			{
				auto_ra(stack_a);
				current2 = *stack_a;
			}
			if (current2->x == nbr)
				auto_pb(stack_a, stack_b);
			current = *stack_a;
		}
		else
			current = current->next;
	}
}

void		create_chunks(t_node **stack_a, t_node **stack_b)
{
	int		min;
	int		max;
	int		dividend;

	min = find_min_max(*stack_a, "min of the list");
	max = find_min_max(*stack_a, "max of the list");
	dividend = ((min - max) / 5);
	intv(stack_a, stack_b, min, (min + dividend));
	intv(stack_a, stack_b, (min + dividend + 1), (min + (dividend * 2)));
	intv(stack_a, stack_b, (min + (dividend * 2) + 1), (min + (dividend * 3)));
	intv(stack_a, stack_b, (min + (dividend * 3) + 1), (min + (dividend * 4)));
	intv(stack_a, stack_b, (min + (dividend * 4) + 1), max);
}


void		sort_hundred(t_node **stack_a, t_node **stack_b)
{
	int			max;
	int			len;
	t_node		*current;

	create_chunks(stack_a, stack_b);
	len = ft_list_size(stack_b);
	while (len != 0)
	{
		current = (*stack_b);
		max = find_min_max(*stack_b, "max of the list");
		while (current->x != max)
		{
			if (find_min_max(*stack_b, "position of the max value") <= (ft_list_size(stack_b) / 2))
				auto_rb(stack_b);
			else
				auto_rrb(stack_b);
			current = (*stack_b);
		}
		if (current->x == max)
			auto_pa(stack_a, stack_b);
		len--;
	}
}
