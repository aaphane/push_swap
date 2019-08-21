/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:48:08 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/19 09:48:11 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include "libft/libft.h"

void        ft_apply_instructions(char *str, t_node **stack_a,t_node **stack_b)
{

    // ft_print_list(stack_a);
    // ft_putchar('\n');
    // ft_print_list(stack_b);
    if (ft_strcmp(str, "sa") == 0)
    {
        if(stack_a)
        ft_swap_nodes(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "sb") == 0)
    {
        if(stack_b)
        ft_swap_nodes(stack_b);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "ss") == 0)
    {
        if(stack_a)
        ft_swap_nodes(stack_a);
        if(stack_b)
        ft_swap_nodes(stack_b);   
        
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "ra") == 0)
    {
        if(stack_a)
        ft_rotate(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "rb") == 0)
    {
        if(stack_b)
        ft_rotate(stack_b);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "rr") == 0)
    {
        if(stack_a)
        ft_rotate(stack_a);
        if(stack_b)
        ft_rotate(stack_b);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "rra") == 0)
    {
        if(stack_a)
        ft_reverse_rotate(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "rrb") == 0)
    {
        if(stack_b)
        ft_reverse_rotate(stack_b);
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "rrr") == 0)
    {
        if(stack_a)
            ft_reverse_rotate(stack_a);
        if(stack_b)
            ft_reverse_rotate(stack_b);
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "pa") == 0)
    {
        if(stack_b != NULL)
            ft_push_to_stack(stack_a, ft_pop(stack_b));
        else
            return ;
        ft_putchar('\n');
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else if (ft_strcmp(str, "pb") == 0)
    {
        if (stack_a != NULL)
            ft_push_to_stack(stack_b, ft_pop(stack_a));
        else
        {
            return ;
        }
        ft_putchar('\n');
		ft_putstr("\033[0;32m");
        ft_putstr("Stack A\n\n");
        ft_print_list(stack_a);
        ft_putchar('\n');
		ft_putstr("\033[0;36m");
        ft_putstr("Stack B\n\n");
        ft_print_list(stack_b);
        ft_putchar('\n');
    }
    else
    {
        return ;
    }
}