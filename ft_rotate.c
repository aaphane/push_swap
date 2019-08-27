/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 16:02:28 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 16:03:35 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void		ft_rotate(t_node **head_copy)
{
	t_node	*ptr;

	ptr = *head_copy;
	while (ptr->next)
	{
		ft_swap(&(ptr->x), &(ptr->next->x));
		ptr = ptr->next;
	}
}
