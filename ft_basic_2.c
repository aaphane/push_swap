#include "push.h"
#include "libft/libft.h"

void	sort_basic_2(t_node **head)
{
	if ((*head)->x > (*head)->next->x)
	{
        ft_swap_nodes(head);
		ft_putendl("sa");
	}
}