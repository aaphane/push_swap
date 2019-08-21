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
			return (-1);
		i++;
	}
	return (0);
}