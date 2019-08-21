#include "libft/libft.h"
#include "push.h"

int ft_validcommand(char *str)
{
	char **command;
	int i;
	char *s;

	i = 0;
	s = "sa sb ss ra rb rr pa pb rra rrb rrr";

	command = ft_strsplit(s, ' ');
	while (command[i])
	{
		if (ft_strcmp(command[i], str) == 0)
			return (0);
		i++;
	}
	return (-1);
}