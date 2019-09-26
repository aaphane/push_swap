/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 16:02:28 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/06 19:52:09 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void		ft_rotate(t_node **head_copy)
{
	t_node	*ptr;

	if (*head_copy)
	{
		ptr = *head_copy;
		while (ptr->next)
		{
			ft_swap(&(ptr->x), &(ptr->next->x));
			ptr = ptr->next;
		}
	}
	return ;
}
