/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:51:54 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 14:51:58 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (unsigned char*)dst;
	sour = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dest);
}
