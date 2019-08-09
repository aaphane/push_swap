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

#include "libft2/libft.h"
#include "push.h"

void        ft_print_list(t_node *head)
{
    while(head != NULL)
    {
        ft_putnbr(head->x);
        ft_putchar('\n');
        head = head->next;
    }
}