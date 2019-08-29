/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_klipa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 20:43:13 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/29 20:43:16 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void    ft_sort_klipa(t_node **stack_a, t_node **stack_b)
{
    t_node *current;
    int min;
    int max;
    int median;
    int difference;
    int range;
    int first_chunk;
    int second_chunk;
    int third_chunk;
    int fourth_chunk;
    int fifth_chunk;
    int temp;
    int temp2;
    int size;
    int index;
    int rev_index;
    int i;

    i = 1;
    stack_b = NULL;
    current = *stack_a;
    min = ft_find_min(current);
    max = ft_find_max(current);
    median = ft_real_median(stack_a);
    difference = max - min;
    //use range to get stacks
    range = difference/5;
    first_chunk = range;
    second_chunk = first_chunk + 1 + range;
    third_chunk = second_chunk + 1 + range;
    fourth_chunk = third_chunk + 1 + range;
    fifth_chunk = fourth_chunk + 1 + range;
    size = ft_list_size(stack_a);

    while(current && i <= (size/2))
    {
        index = 0;
        if (current->x <= first_chunk)
        {
            temp = current->x;
            index = ft_index(stack_a, current->x);
        }
        current = current->next;
    }
    current = *stack_a;
    while(current)
        current = current->next;
    while(current && size >= (size/2))
    {
        rev_index = 0;
         if (current->x <= first_chunk)
        {
            temp2 = current->x;
            rev_index = ft_rev_index(stack_a, current->x);
            break ;
        }
        current = current->prev;
        size--;
    }
    ft_putstr("index = ");
    ft_putnbr(index);
    ft_putendl("\n");
    ft_putstr("rev_index = ");
    ft_putnbr(rev_index);
    // if(index < rev_index)
    // {
    //     while(i <= size/2)
    //     {
    //         current = *stack_a;
    //         if(current->x == temp)
    //         {
    //             ft_push_to_stack(stack_b, ft_pop(stack_a));
    //             ft_putendl("pb");
    //             break ;
    //         }
    //         else
    //             {
    //                 ft_rotate(stack_a);
    //                 ft_putendl("ra");
    //             }
    //         i++;
    //     }
    // }
    // else
    // {
    //     while(size >= size/2)
    //     {
    //         current = *stack_a;
    //         if(current->x == temp2)
    //         {
    //             ft_push_to_stack(stack_b, ft_pop(stack_a));
    //             ft_putendl("pb");
    //             break ;
    //         }
    //         else
    //             {
    //                 ft_reverse_rotate(stack_a);
    //                 ft_putendl("rra");
    //             }
    //         size--;
    //     }
    // }
}
