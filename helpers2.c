/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:16:15 by ftvuser           #+#    #+#             */
/*   Updated: 2019/10/01 00:42:56 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

#include "libft/libft.h"

void	auto_sa(t_node **stack_a)
{
	ft_swap_nodes(stack_a);
	ft_putendl("sa");
}

void	auto_sa_rra(t_node **stack_a)
{
	ft_swap_nodes(stack_a);
	ft_putendl("sa");
	ft_reverse_rotate(stack_a);
	ft_putendl("rra");
}

void	auto_ra(t_node **stack_a)
{
	ft_rotate(stack_a);
	ft_putendl("ra");
}

void	auto_sa_ra(t_node **stack_a)
{
	ft_swap_nodes(stack_a);
	ft_putendl("sa");
	ft_rotate(stack_a);
	ft_putendl("ra");
}

void	auto_rra(t_node **stack_a)
{
	ft_reverse_rotate(stack_a);
	ft_putendl("rra");
}
