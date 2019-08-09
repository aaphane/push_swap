/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftvuser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 20:07:44 by ftvuser           #+#    #+#             */
/*   Updated: 2019/08/09 20:07:47 by ftvuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atoll(const char *str)
{
	long	i;
	long long		num;

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