#include "libft/libft.h"
#include "push.h"


void    ft_swap_a(t_node *head_copy)
{
    t_node *current;
    t_node *temp;

    if (head_copy == NULL || head_copy->next == NULL)
        return ;
    else
        {
            current = head_copy;
            temp = current->next;


            current->prev = temp;
            current->next = temp->next;
            temp->next->prev = current;
            temp->prev = NULL;
            temp->next = current;
            head_copy = temp;
        }
}
