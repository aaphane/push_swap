/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 12:25:46 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/23 12:25:48 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int 	ft_list_size(t_node **head)
{
	t_node *current;
	int size;

	current = *head;
	size = 0;
	while(current->next != NULL)
	{
		current = current->next;
		size++;
	}
	return(size);
}