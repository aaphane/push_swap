/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 10:05:26 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/04 16:28:38 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_sort_list(t_node **head_copy)
{
	t_node *ptr;

	ptr = *head_copy;
	while (ptr->next)
	{
		if (ptr->x < ptr->next->x)
			ptr = ptr->next;
		else
			return (-1);
	}
	return (0);
}
