#include "libft/libft.h"
#include "push.h"

void ft_reverse_rotate(t_node *head_copy)
{
    while(head_copy->next)
    {
        ft_swap(&(head_copy->x), &(head_copy->next->x));
        head_copy = head_copy->next;
    }
}