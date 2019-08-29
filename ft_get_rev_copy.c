#include "libft/libft.h"
#include "push.h"

t_node		*ft_get_rev_copy(t_node *head_copy)
{
	t_node	*temp;
	t_node	*current;

	current = head_copy;
	temp = NULL;
	if (!head_copy)
		return (temp);
	temp = (struct s_node *)malloc(sizeof(struct s_node));
    while(current->next)
        current = current->next;
	temp->x = current->x;
	temp->next = ft_get_rev_copy(current->prev);
	return (temp);
}
