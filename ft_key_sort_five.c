/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_sort_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 00:09:31 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/30 00:09:33 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void ft_key_sort_five(t_node **stack_a, t_node **stack_b)
{
    t_node *current;
    t_node *current2;

    current = *stack_a;
    current2 = *stack_b;
    if ((current->x > current->next->x) && (current->next->x > current->next->next->x) && (current->next->next->x < current->x))
    {
        ft_rotate(&current);
        ft_putendl("ra");
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_reverse_rotate(&current);
        ft_putendl("rra");
    }
    else if ((current->x < current->next->x) && (current->next->x > current->next->next->x) && (current->next->next->x < current->x))
    {
        ft_rotate(&current);
        ft_putendl("ra");
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_reverse_rotate(&current);
        ft_putendl("rra");
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
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_rotate(&current);
        ft_putendl("ra");
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_reverse_rotate(&current);
        ft_putendl("rra");
    }
    else if ((current->x < current->next->x) && (current->next->x < current->next->next->x) && (current->next->next->x > current->x))
    {
        if (stack_b)
        {
            if (ft_sort_list(&current2) == -1)
            {
                ft_push_to_stack(stack_a, ft_pop(stack_b));
                ft_putendl("pa");
                ft_push_to_stack(stack_a, ft_pop(stack_b));
                ft_putendl("pa");
            }
            else
            {
                ft_swap_nodes(&current2);
                ft_putendl("sb");
                ft_push_to_stack(stack_a, ft_pop(stack_b));
                ft_putendl("pa");
                ft_push_to_stack(stack_a, ft_pop(stack_b));
                ft_putendl("pa");
            }
        }
    }
    else
    {
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_rotate(&current);
        ft_putendl("ra");
        ft_swap_nodes(&current);
        ft_putendl("sa");
        ft_reverse_rotate(&current);
        ft_putendl("rra");
        ft_swap_nodes(&current);
        ft_putendl("sa");
    }
    if (!stack_b)
        return;
    else
    {
        if (ft_sort_list(&current2) == -1)
        {
            ft_push_to_stack(stack_a, ft_pop(stack_b));
            ft_putendl("pa");
            ft_push_to_stack(stack_a, ft_pop(stack_b));
            ft_putendl("pa");
        }
        else
        {
            ft_swap_nodes(&current2);
            ft_putendl("sb");
            ft_push_to_stack(stack_a, ft_pop(stack_b));
            ft_putendl("pa");
            ft_push_to_stack(stack_a, ft_pop(stack_b));
            ft_putendl("pa");
        }
    }
}