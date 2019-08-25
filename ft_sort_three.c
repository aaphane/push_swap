/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 08:00:08 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/25 08:00:09 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"


void		ft_sort_three(t_node **head)
{
	t_node *current;

	current = *head;

	if ((current->x < current->next->x) && (current->next->x < current->next->next->x) && (current->next->next->x > current->x))
		return ;
	else if ((current->x > current->next->x) && (current->next->x > current->next->next->x) && (current->next->next->x < current->x))
	{
		ft_rotate(&current);
		ft_putendl("ra");
		ft_swap_nodes(&current);
		ft_putendl("sa");
	}
	else if ((current->x > current->next->x) && (current->next->x < current->next->next->x) && (current->next->next->x > current->x))
	{
		ft_swap_nodes(&current);
		ft_putendl("sa");
	}
	else if ((current->x > current->next->x) && (current->next->x < current->next->next->x) && (current->next->next->x < current->x))
	{
		ft_rotate(&current);
		ft_putendl("ra");
	}
	else if ((current->x < current->next->x) && (current->next->x > current->next->next->x) && (current->next->next->x < current->x))
	{
		ft_reverse_rotate(&current);
		ft_putendl("rra");
	}
	else
	{
		ft_reverse_rotate(&current);
		ft_putendl("rra");
		ft_swap_nodes(&current);
		ft_putendl("sa");
	}
	
}