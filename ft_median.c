#include "libft/libft.h"
#include "push.h"

int ft_median(t_node **head)
{
	int median_val;
	int size;
	t_node *current;
	int i;
	int j;

	i = 1;
	current = *head;
	size = ft_list_size(&current);

	if (size % 2 == 0)
		j = size / 2;
	else
		j = (size / 2) + 1;
	while (current && (i <= j))
	{
		if (i == j)
		{
			median_val = current->x;
		}
		current = current->next;
		i++;
	}
	return (median_val);
}