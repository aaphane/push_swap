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

/* rotate b - shift up all elements of stack b by 1. The first element becomes the last one. */
void    ra(t_node **head_copy)
{
    /* to make a copy of the first element */
    t_node *temp;

    t_node *current;

    current = *head_copy;

    if(iterater(current) <= 1)
        return ;
    /* make  copy of the first element */
    temp = current;
    while (temp->next) /* transverse through the list to the end */
        temp = temp->next;
    /* temp is now the last element */
    /* current is still at the top of the list as it hasn't moved */
    *head_copy = current->next; /* to connect the head to the second element, but its prev is still connected to the   next one */
    (*head_copy)->prev = NULL; /* to break the head's connection to the first element, but it's still attached to the next element. */
    temp->next = current; /* the next of the temp(as it's the last element now) should be connected to the first element */
    current->next = NULL; /* to break off what was left of the connection between first and second */
    current->prev = temp; /* the current's prev should be equal to NULL as it's the first element */
}