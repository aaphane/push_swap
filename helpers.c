/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:04:12 by ftvuser           #+#    #+#             */
/*   Updated: 2019/10/01 02:02:58 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include "libft/libft.h"

void	auto_pa(t_node **stack_a, t_node **stack_b)
{
	ft_push_to_stack(stack_a, ft_pop(stack_b));
	ft_putendl("pa");			
}

void	auto_rb(t_node **stack_b)
{
	ft_rotate(stack_b);
	ft_putendl("rb");

}

void	auto_pb(t_node **stack_a, t_node **stack_b)
{
	ft_push_to_stack(stack_b, ft_pop(stack_a));
	ft_putendl("pb");
}

void	auto_rrb(t_node **stack_b)
{
	ft_reverse_rotate(stack_b);
	ft_putendl("rrb");
}

