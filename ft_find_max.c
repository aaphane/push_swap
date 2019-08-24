#include "libft/libft.h"
#include "push.h"


int			ft_find_max(t_node *head)
{
	int max;

	t_node *current;

	max = -2147483648;
	current = head;

	while(current != NULL)
	{
		if(max < current->x)
		{
			max = current->x;
		}
		current = current->next;
	}
	return(max);
}