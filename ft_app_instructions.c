/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:48:08 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/07 06:11:24 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include "libft/libft.h"

void	for_swapping(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(str, "sa") == 0)
	{
		if (stack_a)
			ft_swap_nodes(stack_a);
	}
	else if (ft_strcmp(str, "sb") == 0)
	{
		if (stack_b)
			ft_swap_nodes(stack_b);
	}
	else if (ft_strcmp(str, "ss") == 0)
	{
		if (stack_a)
			ft_swap_nodes(stack_a);
		if (stack_b)
			ft_swap_nodes(stack_b);
	}
}

void	for_rotating(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(str, "ra") == 0)
	{
		if (stack_a)
			ft_rotate(stack_a);
	}
	else if (ft_strcmp(str, "rb") == 0)
	{
		if (stack_b)
			ft_rotate(stack_b);
	}
	else if (ft_strcmp(str, "rr") == 0)
	{
		if (stack_a)
			ft_rotate(stack_a);
		if (stack_b)
			ft_rotate(stack_b);
	}
}

void	for_reverse_rotating(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(str, "rra") == 0)
	{
		if (stack_a)
			ft_reverse_rotate(stack_a);
	}
	else if (ft_strcmp(str, "rrb") == 0)
	{
		if (stack_b)
			ft_reverse_rotate(stack_b);
	}
	else if (ft_strcmp(str, "rrr") == 0)
	{
		if (stack_a)
			ft_reverse_rotate(stack_a);
		if (stack_b)
			ft_reverse_rotate(stack_b);
	}
}

void	poppings(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(str, "pa") == 0)
	{
		if (*stack_b != NULL)
			ft_push_to_stack(stack_a, ft_pop(stack_b));
		else
			return ;
	}
	else if (ft_strcmp(str, "pb") == 0)
	{
		if (*stack_a != NULL)
			ft_push_to_stack(stack_b, ft_pop(stack_a));
		else
			return ;
	}
}

void	ft_app_instructions(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(str, "sa") == 0 || ft_strcmp(str, "sb") == 0 ||
			ft_strcmp(str, "ss") == 0)
	{
		for_swapping(str, stack_a, stack_b);
	}
	else if (ft_strcmp(str, "ra") == 0 || ft_strcmp(str, "rb") == 0 ||
			ft_strcmp(str, "rr") == 0)
	{
		for_rotating(str, stack_a, stack_b);
	}
	else if (ft_strcmp(str, "rra") == 0 || ft_strcmp(str, "rrb") == 0 ||
			ft_strcmp(str, "rrr") == 0)
	{
		for_reverse_rotating(str, stack_a, stack_b);
	}
	else if (ft_strcmp(str, "pa") == 0 || ft_strcmp(str, "pb") == 0)
	{
		poppings(str, stack_a, stack_b);
	}
	else
		return ;
}
