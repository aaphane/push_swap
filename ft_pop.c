/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 07:19:21 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/06 19:56:54 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_pop(t_node **head_copy)
{
	t_node	*current;
	int		temp;

	current = *head_copy;
	if ((*head_copy)->next)
	{
		temp = current->x;
		*head_copy = (*head_copy)->next;
		(*head_copy)->prev = NULL;
		current->next = NULL;
		free(current);
	}
	else
	{
		temp = current->x;
		free(current);
		*head_copy = NULL;
	}
	return (temp);
}
