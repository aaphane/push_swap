/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 22:17:43 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/26 22:17:46 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

void        ft_sort_two(t_node **head)
{
    if(ft_sort_list(head) == 0)
    {
        ft_swap_nodes(head);
        ft_putendl("sa");
    }
    else
        return ;
}