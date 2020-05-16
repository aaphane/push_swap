/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fafandred.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 02:25:32 by ftvuser           #+#    #+#             */
/*   Updated: 2019/10/01 02:57:37 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	eleven_chunks(t_node **stack_a, t_node **stack_b)
{
	int		min;
	int		max;
	int		dividend;

	min = find_min_max(*stack_a, "min of the list");
	max = find_min_max(*stack_a, "max of the list");
	dividend = ((max - min) / 11);
	intv(stack_a, stack_b, min, (min + dividend));
	intv(stack_a, stack_b, (min + dividend + 1), (min + (dividend * 2)));
	intv(stack_a, stack_b, (min + (dividend * 2) + 1), (min + (dividend * 3)));
	intv(stack_a, stack_b, (min + (dividend * 3) + 1), (min + (dividend * 4)));
	intv(stack_a, stack_b, (min + (dividend * 4) + 1), (min + (dividend * 5)));
	intv(stack_a, stack_b, (min + (dividend * 5) + 1), (min + (dividend * 6)));
	intv(stack_a, stack_b, (min + (dividend * 6) + 1), (min + (dividend * 7)));
	intv(stack_a, stack_b, (min + (dividend * 7) + 1), (min + (dividend * 8)));
	intv(stack_a, stack_b, (min + (dividend * 8) + 1), (min + (dividend * 9)));
	intv(stack_a, stack_b, (min + (dividend * 9) + 1), (min + (dividend * 10)));
	intv(stack_a, stack_b, (min + (dividend * 10) + 1), max);
}

void	sort_fafandred(t_node **stack_a, t_node **stack_b)
{
	int			max;
	int			len;
	t_node		*current;

	eleven_chunks(stack_a, stack_b);
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
