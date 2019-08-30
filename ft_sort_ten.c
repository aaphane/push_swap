/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ten.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:52:31 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 09:52:33 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void ft_sort_ten(t_node **stack_a, t_node **stack_b)
{
    t_node *current = NULL;
    t_node *current2;
    int median;
    int median2;
    int size;
    int size2;
    int i;

    current = *stack_a;
    size = ft_list_size(stack_a);
    i = 1;
    median = ft_median(stack_a);
    while (i <= (size))
    {
        current = *stack_a;
        if (current->x <= median)
        {
            ft_push_to_stack(stack_b, ft_pop(stack_a));
            ft_putendl("pb");
        }
        else
            ft_rotate(stack_a);
        ft_putendl("ra");
        i++;
    }
    i = 1;
    ft_sort_five(stack_a, stack_b);
    median2 = ft_median(stack_b);
    size2 = ft_list_size(stack_b);
    while (i <= (size2))
    {
        current2 = *stack_b;
        if (current2->x >= median2)
        {
            ft_push_to_stack(stack_a, ft_pop(stack_b));
            ft_putendl("pa");
        }
        else
            ft_rotate(stack_b);
        ft_putendl("rb");
        i++;
    }
    ft_key_sort_five(stack_a, stack_b);
}