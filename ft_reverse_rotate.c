/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:32:45 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 15:36:54 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void		ft_reverse_rotate(t_node **head_copy)
{
	t_node	*ptr;

	ptr = *head_copy;
	if (ptr != NULL)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		while (ptr->prev)
		{
			ft_swap(&(ptr->x), &(ptr->prev->x));
			ptr = ptr->prev;
		}
	}
	else
		return ;
}
