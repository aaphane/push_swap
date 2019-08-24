#include "libft/libft.h"
#include "push.h"

void		ft_rotate_to_place(t_node **head_copy)
{
	int size;
	int i;
	int position;
	t_node *current;
	t_node *middle;
	t_node *median_position;

	size = 0;
	current = *head_copy;
	middle = *head_copy;
	while(current->next)
	{
		current = current->next;
		size++;
	}
	if(size % 2 == 0)
	{
		position = size / 2;
		while()
		{

		}
	}
	else
	{
		while(current->next->next && middle->next)
		{
			current = current->next->next;
			middle = middle->next;		
		}
		middle = median_position;
	}
}

