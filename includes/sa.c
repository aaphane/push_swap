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

void    sa(t_node **head_copy)
{
    t_node *temp;
    t_node *temp2;
    t_node *temp3;

    *head_copy = temp;
    if (iterater(temp) <= 1)
        return ;
    temp2 = temp->next;
    temp3 = temp->next->next;

    temp->next = temp3;
    temp2->next = temp;
    temp2->prev = NULL;
    temp3->prev = temp;
    temp->prev = temp2;

    *head_copy = temp2;
}