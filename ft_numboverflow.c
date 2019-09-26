/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numboverflow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:25:00 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/05 14:36:27 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_numboverflow(char *str)
{
	int			ai;
	long long	all;

	ai = ft_atoi(str);
	all = ft_atoll(str);
	if (ai > 2147483647 && ai <= -2147483648)
	{
		ft_putendl("Error: Numb overflow");
		return (-1);
	}
	if (ai == all)
		return (0);
	else
	{
		ft_putendl("Error: Numb overflow");
		return (-1);
	}
}
