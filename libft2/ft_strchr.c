/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:01:46 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:01:51 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	find;

	i = 0;
	find = (char)c;
	str = (char *)s;
	while (str[i] != '\0' && str[i] != find)
	{
		i++;
	}
	if (str[i] == find)
		return (str + i);
	return (NULL);
}
