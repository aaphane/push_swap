#include "libft/libft.h"
#include "push.h"

t_node		*ft_get_copy(t_node *head_copy)
{
	t_node *temp;
	t_node *current;

	current = head_copy;
	temp = NULL;

   if(!head_copy)
   	return(temp);
   temp = (struct s_node *)malloc(sizeof(struct s_node));
   temp->x = current->x;
   temp->next = ft_get_copy(head_copy->next);
   return temp;
}