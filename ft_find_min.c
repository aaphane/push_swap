#include "libft/libft.h"
#include "push.h"

int			ft_find_min(t_node *head)
{
	int min;
	t_node *current;

	min = 2147483647;
	current = head;

	while(current != NULL)
	{
		if(min > current->x)
		{
			min = current->x;
		}
		current = current->next;
	}
	return(min);
}