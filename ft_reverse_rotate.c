#include "libft/libft.h"
#include "push.h"

void ft_reverse_rotate(t_node **head_copy)
{
    t_node *ptr;

    
    ptr = *head_copy;
    if (ptr != NULL)
    {
        while (ptr->next)
         {
             ptr = ptr->next;
         }
        while (ptr->prev)
        {
            ft_swap(&(ptr->x), &(ptr->prev->x));
            ptr = ptr->prev;
        }
    }
    else
    {
        return ;
    }
}