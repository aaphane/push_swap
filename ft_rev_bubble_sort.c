/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_bubble_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:23:53 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 20:23:56 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"


int		ft_rev_bubble_sort(t_node **head_copy)
{
	t_node *current;
	t_node *current2;

	current = *head_copy;
	while (current->next != NULL)
	{
		current2 = current->next;
		while (current2 != NULL)
		{
			if (current->x < current2->x)
				ft_swap(&(current2->x), &(current->x));
			current2 = current2->next;
		}
		current = current->next;
	}
	return (0);
}