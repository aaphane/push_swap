/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:31:06 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 20:31:08 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int     ft_rev_index(t_node **head, int number)
{
    int index;
    t_node *clone;
    t_node *current;
    t_node *current2;

    current = *head;
    clone = ft_get_copy(current);
    index = 0;
    ft_rev_bubble_sort(&clone);
    current2 = clone;
    while(current2->next)
    {
        if(current2->x == number)
            break ;
        current2 = current2->next;   
        index++;
    }
    return(index);
}