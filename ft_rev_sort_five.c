#include "libft/libft.h"
#include "push.h"

void    ft_rev_sort_five(t_node **stack_a, t_node **stack_b)
{
    t_node *current = NULL;
    int median;
    int size;
    int i;

    current = *stack_b;
    size = ft_list_size(stack_b);
    i = 1;
    median = ft_median(stack_b);
    while(i <= (size))
    {   current = *stack_b;
        if(current->x > median)
        {
            ft_push_to_stack(stack_a, ft_pop(stack_b));
			ft_putendl("pa");
        }
        else
		{
            ft_rotate(stack_b);
			ft_putendl("rb");
		}
        i++;
    }
    ft_sort_three(stack_b);
	ft_sort_two(stack_a);
    ft_push_to_stack(stack_b, ft_pop(stack_a));
	ft_putendl("pb");
	ft_push_to_stack(stack_b, ft_pop(stack_a));
	ft_putendl("pb");
}