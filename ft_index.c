/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:05:12 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 20:05:16 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int     ft_index(t_node **head, int number)
{
    int index;
    t_node *current;

    index = 0;
    current = *head;
    while(current->next)
    {
        if(current->x == number)
            break ;
        current = current->next;
        index++;
    }
    return(index);
}