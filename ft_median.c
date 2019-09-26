/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:19:54 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/04 13:20:58 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_median(t_node **head, int size)
{
	int		median_val;
	t_node	*current;
	t_node	*clone;
	int		i;
	int		j;

	i = 1;
	current = *head;
	size = ft_list_size(&current);
	clone = ft_get_copy(current);
	ft_bubble_sort(&clone);
	if (size % 2 == 0)
		j = size / 2;
	else
		j = (size / 2) + 1;
	while (clone && (i <= j))
	{
		if (i == j)
			median_val = clone->x;
		clone = clone->next;
		i++;
	}
	return (median_val);
}
