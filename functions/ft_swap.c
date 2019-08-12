#include "libft/libft.h"
#include "push.h"

void    ft_swap_(t_node *head_copy)
{
    if (head_copy == NULL || head_copy->next == NULL)
        return ;
    else
        {
            ft_swap(&(head_copy->x), &(head_copy->next->x));
        }
}
