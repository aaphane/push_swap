/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_and_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 23:43:24 by ftvuser           #+#    #+#             */
/*   Updated: 2019/10/01 02:56:20 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include "libft/libft.h"

static int		min(t_node *head, char *flag)
{
	int			nbr;
	int			position;
	int			ctr;
	t_node		*current;;

	nbr = head->x;
	current = head->next;
	position = 1;
	ctr = 2;
	while (current != NULL)
	{
		if (current->x < nbr)
		{
			nbr = current->x;
			position = ctr;
		}
		current = current->next;
		ctr++;
	}
	if (ft_strequ(flag, "min of the list"))
		return (nbr);
	else if (ft_strequ(flag, "position of the min value"))
		return (position);
	return (0);
}

static int		max(t_node *head, char *flag)
{
	int			nbr;
	int			position;
	int			ctr;
	t_node		*current;

	nbr = head->x;
	current = head->next;
	position = 1;
	ctr = 2;
	while (current != NULL)
	{
		if (current->x > nbr)
		{
			nbr = current->x;
			position = ctr;
		}
		current = current->next;
		ctr++;
	}
	if (ft_strequ(flag, "max of the list"))
		return (nbr);
	else if (ft_strequ(flag, "position of the max value"))
		return (position);
	return (0);
}

int		find_min_max(t_node *stack, char *flag)
{
	if (ft_strequ(flag, "min of the list"))
		return (min(stack, flag));
	else if (ft_strequ(flag, "position of the min value"))
		return (min(stack, flag));
	else if (ft_strequ(flag, "max of the list"))
		return (max(stack, flag));
	else if (ft_strequ(flag, "position of the max value"))
		return (max(stack, flag));
	return (0);
}

