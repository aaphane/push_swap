/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:41:19 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/28 12:16:35 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	int		num;

	i = 0;
	if (!str)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || (*str == 32))
		str++;
	if (*str == '-')
		num = -1;
	else
		num = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	if (i < 0 && num == 1)
		return (-1);
	if (i < 0)
		return (0);
	return (i * num);
}
