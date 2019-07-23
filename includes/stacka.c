#include "../libft2/libft.h"

int main(int argc, char **argv)
{
    t_node *head;
    t_node *current;
    int i;

    i = 1;
    head = NULL;
    current = head;

    while(argc > i)
    {
        t_node *node;
        node = malloc(sizeof(current));
        node->x = ft_atoi(argv[i]);
        node->link = NULL;
        if(current == NULL)
        {
            head = node;
            current = head; 
        }
        else
        {
            current->link = node;
            current = current->link;
        }
        // printf("%i",current->x);
       i++;
    }
    ft_putstr("STACK A\tSTACK B");
    ft_putchar('\n');
    while (head)
    {
        printf("%d\n", head->x);
        head = head->link;
    }
    return (0);
}
