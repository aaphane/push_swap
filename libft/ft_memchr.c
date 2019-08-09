/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:50:00 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 14:50:05 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ptr;
	int				i;

	i = 0;
	str = (unsigned char*)s;
	ptr = (unsigned char)c;
	if (!s)
		return (NULL);
	while (n--)
	{
		if (str[i] == ptr)
			return (str + i);
		i++;
	}
	return (NULL);
}
