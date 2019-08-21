#include "libft/libft.h"
#include "push.h"

void ft_rotate(t_node **head_copy)
{
    // t_node *ptr;

    // ptr = *head_copy;
    if (*head_copy != NULL)
    {
        while ((*head_copy)->next)
        {
            *head_copy = (*head_copy)->next;
        }
        while ((*head_copy)->prev)
        {
            ft_swap((&(*head_copy)->x), &((*head_copy)->prev->x));
            *head_copy = (*head_copy)->prev;
        }
    }
    else
    {
        return ;
    }
}