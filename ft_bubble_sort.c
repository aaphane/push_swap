/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 15:17:42 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/23 15:17:44 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int        ft_bubble_sort(t_node **head_copy) 
{
    t_node *current;
    t_node *current2;

    current = *head_copy;
    while(current->next != NULL)
    {
        current2 = current->next;
        while(current2 != NULL)
        {
            if(current->x > current2->x)
            {
                ft_swap(&(current->x), &(current2->x));
            }
            current2 = current2->next;
        }
        current = current->next;
    }
     return(0);
} 