/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicatenum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:51:02 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 15:53:20 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_duplicatenum(int *arr, int size)
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
				ft_putstr("ERROR: Duplicate numbers not allowed\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
