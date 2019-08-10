#include "libft/libft.h"
#include "push.h"

int	iterater(t_node *tmp)
{
	int i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return i;
}

void    ft_swap_a(t_node *head_copy)
{
    t_node *current;
    t_node *temp;

    current = head_copy;
    if (iterater(current) <= 1)
        return ;
    else
        {
            current = head_copy;
            temp = current->next;

            current->prev = temp;
            current->next = temp->next;
            temp->next->prev = current;
            temp->next = current;
            temp->prev = NULL;
        }
            head_copy = temp;

}