/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 16:04:31 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/27 16:07:01 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_validnumber(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (((ft_isdigit(str[i])) != 1))
		{
			ft_putstr("ERROR: Input is not a vild number\n");
			return (-1);
		}
		i++;
	}
	return (0);
}
