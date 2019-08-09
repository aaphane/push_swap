/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:26:13 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/09 14:26:15 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

typedef struct s_node
{
    int x;
    struct s_node *next;
    struct s_node *prev;
} t_node;

void        ft_print_list(t_node *head);
void        ft_add_to_stack(int *nums, int size, t_node **current);
#endif