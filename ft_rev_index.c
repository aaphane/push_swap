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
    int size;

    size = ft_list_size(head);
    index = size - (ft_index(head, number) + 1);
    return(index);
}