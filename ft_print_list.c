/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:21:44 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/09 14:21:50 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void        ft_print_list(t_node **head)
{
    t_node  *ptr;

    ptr = *head;
    while(ptr != NULL)
    {
        ft_putnbr(ptr->x);
        ft_putchar('\n');
        ptr = ptr->next;
    }
}