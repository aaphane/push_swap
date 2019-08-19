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

#ifndef PUSH_H
# define PUSH_H

typedef struct s_node
{
    int x;
    struct s_node *next;
    struct s_node *prev;
} t_node;

void        ft_print_list(t_node *head);
void        ft_add_to_stack(int *nums, int size, t_node **current);
void        ft_swap_nodes(t_node *head_copy);
void        ft_add_to_stack(int *nums, int size, t_node **current);
void        ft_rotate(t_node *head_copy);
void        ft_add_node_at_top(int number, t_node *head_copy);
void        ft_reverse_rotate(t_node *head_copy);
void        ft_push_to_stack(t_node *head_copy, int new_data);
int         ft_pop(t_node *head_copy);

#endif