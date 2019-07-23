#include "../libft2/libft.h"

typedef struct s_node
{
    int x;
    struct s_node *next;
    struct s_node *prev;
}   t_node;

typedef struct s_head
{
    t_node  *start;
    size_t  count;
}           t_head;

int main(int argc, char **argv)
{
    t_head *head = (t_head *)malloc(sizeof(t_head));
    t_node *current;
    t_node *temp;
    temp = NULL;
    int i;

    i = 1;
    head->start = NULL;
    head->count = 0;
    current = head->start;

    while(argc > i)
    {
        t_node *node;
        node = (struct s_node *)malloc(sizeof(struct s_node));
        node->x = ft_atoi(argv[i]);
        node->next = NULL;
        node->prev = NULL;
        if(current == NULL)
        {
            head->start = node;
            current = node;
            head->count++;
        }
        else
        { 
            current->next = node;
            node->prev = current;
            current = node;
            head->count++;
        }
        i++;
    }
    ft_putstr("STACK A\tSTACK B");
    ft_putchar('\n');
    temp = head->start;
    //while(temp->next)
    //    temp = temp->next;
   while(temp)
   {
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    return (0);
}
