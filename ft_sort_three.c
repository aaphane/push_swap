/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 08:00:08 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/04 15:28:01 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void	sort1(t_node **head)
{
	t_node *current;

	current = *head;
	ft_rotate(&current);
	ft_putendl("ra");
	ft_swap_nodes(&current);
	ft_putendl("sa");
}

void	sort2(t_node **head)
{
	t_node *current;

	current = *head;
	ft_swap_nodes(&current);
	ft_putendl("sa");
}

void	sort3(t_node **head)
{
	t_node *current;

	current = *head;
	ft_rotate(&current);
	ft_putendl("ra");
}

void	sort4(t_node **head)
{
	t_node *current;

	current = *head;
	ft_reverse_rotate(&current);
	ft_putendl("rra");
	ft_swap_nodes(&current);
	ft_putendl("sa");
}

void	ft_sort_three(t_node **head)
{
	t_node	*current;
	int		arr[3];

	current = *head;
	arr[0] = current->x;
	arr[1] = current->next->x;
	arr[2] = current->next->next->x;
	current = *head;
	if ((arr[0] < arr[1]) && (arr[1] < arr[2]))
		return ;
	else if ((arr[0] > arr[1]) && (arr[1] > arr[2]) && (arr[2] < arr[0]))
		sort1(&current);
	else if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] > arr[0]))
		sort2(&current);
	else if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] < arr[0]))
		sort3(&current);
	else if ((arr[0] < arr[1]) && (arr[1] > arr[2]) && (arr[2] < arr[0]))
	{
		ft_reverse_rotate(&current);
		ft_putendl("rra");
	}
	else
		sort4(&current);
}
