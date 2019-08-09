/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:13:44 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:13:49 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;
	char	*str;

	str = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	if (find == 0)
		return (str + i);
	while (0 <= i)
	{
		if (str[i] == find)
			return (str + i);
		i--;
	}
	return (NULL);
}
