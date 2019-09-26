/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:06:33 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/05 14:39:06 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void	ft_add_to_stack(int *nums, int size, t_node **current)
{
	t_node	*head;
	t_node	*node;
	int		i;

	i = 0;
	head = NULL;
	while (i < size)
	{
		node = (struct s_node *)malloc(sizeof(struct s_node));
		node->x = nums[i++];
		node->next = NULL;
		node->prev = NULL;
		if (*current == NULL)
		{
			head = node;
			*current = node;
		}
		else
		{
			(*current)->next = node;
			node->prev = *current;
			*current = node;
		}
	}
	*current = head;
}
