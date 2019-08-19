/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 07:31:19 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/19 07:31:21 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include "libft/libft.h"

void        ft_push_to_stack(t_node *head_copy, int new_data)
{
    t_node *new_node;
    t_node *current;

    current = head_copy;
    new_node = (struct s_node *)malloc(sizeof(struct s_node));
    new_node->x = new_data;

    if(head_copy == NULL)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
        head_copy = new_node;
    }
    else
    {
        new_node->next = current;
        current->prev = new_node;
        new_node->prev = NULL;
        head_copy = new_node;
    }
    
}
