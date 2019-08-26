/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:39:51 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/26 21:39:53 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void    ft_sort_four(t_node **stack_a, t_node **stack_b)
{
    t_node *current = NULL;
    t_node *clone;
    int median;

    current = *stack_a;
    clone = ft_get_copy(current);
    ft_bubble_sort(&clone);
    median = ft_median(&clone);
    ft_putstr("median is = ");
    ft_putnbr(median);
    while(current && stack_a)
    {   
        if((current->x < median) )
            ft_push_to_stack(stack_b, ft_pop(&current));
        current = current->next;
    }
}