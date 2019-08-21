#include "libft/libft.h"
#include "push.h"

void ft_reverse_rotate(t_node **head_copy)
{
    // t_node *ptr;

    // ptr = *head_copy;
    if (*head_copy != NULL)
    {
        while ((*head_copy)->next)
        {
            ft_swap(&((*head_copy)->x), &((*head_copy)->next->x));
            *head_copy = (*head_copy)->next;
        }
    }
    else
    {
        return ;
    }
}