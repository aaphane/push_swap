#include "libft/libft.h"
#include "push.h"

void    ft_rotate(t_node *head_copy)
{
    while (head_copy->next)
    {
        head_copy = head_copy->next;
    }
    while(head_copy->prev)
    {
        ft_swap(&(head_copy->prev->x), &(head_copy->x));
        head_copy = head_copy->prev;
    }
}