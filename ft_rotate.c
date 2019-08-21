#include "libft/libft.h"
#include "push.h"

void ft_rotate(t_node **head_copy)
{
    t_node *ptr;

     ptr = *head_copy;
  
        while (ptr->next)
        {
            ft_swap(&(ptr->x), &(ptr->next->x));
            ptr = ptr->next;
        }
 }