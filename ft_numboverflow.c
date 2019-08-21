#include "libft/libft.h"
#include "push.h"

int ft_numboverflow(char *str)
{
	int ai;
	long long all;

	ai = ft_atoi(str);
	all = ft_atoll(str);
	if (ai == all)
		return (0);
	else
	{
		return (-1);
	}
}