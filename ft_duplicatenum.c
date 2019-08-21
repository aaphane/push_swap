#include "libft/libft.h"
#include "push.h"

int ft_duplicatenum(int *arr, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[j] == arr[i] && i != j)
			{
				ft_putstr("\033[0;31m");
				ft_putstr("ERROR: Duplicate numbers not allowed\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}