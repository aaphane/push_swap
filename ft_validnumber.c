#include "libft/libft.h"
#include "push.h"

int ft_validnumber(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (((ft_isdigit(str[i])) != 1))
		{
			ft_putstr("\033[0;31m");
			ft_putstr("ERROR: Input is not a vild number i.e '4-', letter, etc\n");
			ft_putstr("\e[0m");
			return (-1);
		}
		i++;
	}
	return (0);
}