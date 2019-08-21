#include "libft/libft.h"
#include "push.h"

void    ft_swap_nodes(t_node **head_copy)
{
    t_node *ptr;

    ptr = *head_copy;
    if (ptr == NULL || ptr->next == NULL)
        return ;
    else
        {
            ft_swap(&(ptr->x), &(ptr->next->x));
        }
}
