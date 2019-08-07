/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:06:33 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/06 14:06:41 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"

typedef struct s_node
{
    int x;
    struct s_node *next;
    struct s_node *prev;
}   t_node;

typedef struct s_head
{
    t_node  *start;
    size_t  count;
}           t_head;

void        ft_first_stack(int *nums, t_node **current)
{
    t_head *head = (t_head *)malloc(sizeof(t_head));
    t_node *temp;
    int i;

    temp = NULL;
    i = 1;
    head->start = NULL;
    head->count = 0;
    *current = head->start; //why? head->start = *current;
    while(head->start) //fix and make sense
    {
        t_node *node;
        node = (struct s_node *)malloc(sizeof(struct s_node));
        node->x = ft_atoi(nums[i - 1]);
        node->next = NULL;
        node->prev = NULL;
        if(*current == NULL)
        {
            head->start = node;
            *current = node;
            head->count++;
        }
        else
        {
            (*current)->next = node;
            node->prev = *current;
            current = node;
            head->count++;
        }
        i++;
    }

}

int         main(int argc, char **argv)
{
    t_node **stack_a;
    t_node **stack_b;
