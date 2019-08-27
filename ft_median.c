#include "libft/libft.h"
#include "push.h"

int ft_median(t_node **head)
{
	int median_val;
	int size;
	t_node *current;
	t_node *clone;
	int i;
	int j;

	i = 1;
	current = *head;
	size = ft_list_size(&current);
	clone = ft_get_copy(current);
	ft_bubble_sort(&clone);
	if (size % 2 == 0)
		j = size / 2;
	else
		j = (size / 2) + 1;
	while (clone && (i <= j))
	{
		if (i == j)
			median_val = clone->x;
		clone = clone->next;
		i++;
	}
	return (median_val);
}