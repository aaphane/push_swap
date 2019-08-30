/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_twenty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 01:43:47 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/30 01:43:48 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void ft_sort_twenty(t_node **stack_a, t_node **stack_b)
{
    t_node *current;
    int t_quart;
    int f_quart;
    int size;
    int median;
    int i;

    current = *stack_a;
    size = ft_list_size(stack_a);
    i = 1;
    t_quart = ft_third_quartile(stack_a);
    median = ft_median(stack_a);
    f_quart = ft_first_quartile(stack_a);
    // while (i <= (size))
    // {
    //     current = *stack_a;
    //     if (current->x < f_quart)
    //     {
    //         ft_push_to_stack(stack_b, ft_pop(stack_a));
    //         ft_putendl("pb");
    //     }
    //     else
    //         ft_rotate(stack_a);
    //     ft_putendl("ra");
    //     i++;
    // }
    // ft_sort_five(stack_a, stack_b);
    i = 1;
    size = ft_list_size(stack_a);
    while (i <= (size))
    {
        current = *stack_a;
        if (current->x <= median)
        {
            ft_push_to_stack(stack_b, ft_pop(stack_a));
            ft_putendl("pa");
        }
        else
            ft_rotate(stack_a);
        ft_putendl("rb");
        i++;
    }
    ft_rev_sort_five(stack_a, stack_b);
    ft_sort_three(stack_b);
    // i = 1;
    // size = ft_list_size(stack_a);
    // while (i <= (size))
    // {
    //     current = *stack_a;
    //     if (current->x <= t_quart)
    //     {
    //         ft_push_to_stack(stack_b, ft_pop(stack_a));
    //         ft_putendl("pb");
    //     }
    //     else
    //         ft_rotate(stack_a);
    //     ft_putendl("ra");
    //     i++;
    // }
    // ft_sort_five(stack_a, stack_b);
    // ft_key_sort_five(stack_a, stack_b);
}