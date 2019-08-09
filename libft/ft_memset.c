/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:54:36 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 14:54:42 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*dst;
	unsigned char	src;
	size_t			i;

	i = 0;
	dst = (char*)b;
	src = (unsigned char)c;
	if (b || c)
	{
		while (i < len)
		{
			dst[i] = src;
			i++;
		}
		return (dst);
	}
	return (NULL);
}
