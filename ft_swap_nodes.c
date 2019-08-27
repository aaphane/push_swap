/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:37:24 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 15:40:47 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void		ft_swap_nodes(t_node **head_copy)
{
	t_node	*ptr;

	ptr = *head_copy;
	if (ptr == NULL || ptr->next == NULL)
		return ;
	else
		ft_swap(&(ptr->x), &(ptr->next->x));
}
