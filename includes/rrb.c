#include "../libft2/libft.h"

typedef struct s_node
{
    int x;
    struct s_node *next;
    struct s_node *prev;
}   t_node;

/* function to check the number of elements in the list */
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

/* reverse rotate a function - shift down all elements of stack a by 1. The last element becomes the first one. */
void    rrb(t_node **head_copy)
{
    t_node *current;
    t_node *temp;
    t_node *temp2;

    if (iterater(current) <= 1)
            return  ;
        /* if there are more than 1 elements, rotations can happen */
        temp = current;
        while (temp->next)
            temp = temp->next;
        
        /* NOW WE AT THE END OF THE LIST */

        /* getting the second last element so i can cut off the connection with the last */
        temp2 = temp->prev;

        /* connect te last with the first */
        temp->next = *head_copy;
        /* cut connection between last and the one before it, but the previous one's next is still connected to it */
        temp->prev = NULL;
        /* to cut off the connection between second last and last */
        temp2->next = NULL;

        /* update the head */
        *head_copy = temp;
}
