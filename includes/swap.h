#include "libft2"

typedef struct        s_int
{
    int                num;
    int                rot;
    int                sort_up;
    int                sort_down;
    int                double_rot;
}                    stack_int;

typedef struct        s_stack
{
    stack_int        *arr;
    size_t            size;
}                    t_stack;

t_stack                *ft_init_stack(void);
t_stack                *ft_stack_push(t_stack **stack, int content);
t_stack                *ft_stack_rotate(t_stack **stack);
t_stack                *ft_stack_rev_rotate(t_stack **stack);
stack_int            ft_stack_pop(t_stack **stack);

#endif