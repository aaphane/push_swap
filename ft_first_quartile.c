/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_quartile.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 02:23:42 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/30 02:23:44 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int         ft_first_quartile(t_node **head)
{
	t_node *current;
	t_node *current2;
	t_node *clone;
	int 	size;
	int		i;
	int 	j;
	int 	first_quart;
	
	current = *head;
	clone = ft_get_copy(current);
	ft_bubble_sort(&clone);
	size = ft_list_size(head);
	i = 1;
	if(size % 2 == 0)
		j = size * 0.25;
	else
		j = size * 0.25 + 1;
	current2 = clone;
	while(current2 && (i <= j))
	{
		if (i == j)
			first_quart = current2->x;
		current2 = current2->next;
		i++;
	}
	return(first_quart);
}