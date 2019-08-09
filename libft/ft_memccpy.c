/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:48:47 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 14:48:52 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	unsigned int	i;
	unsigned char	ptr;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	ptr = (unsigned char)c;
	i = 0;
	if (!s1 || !s2)
		return (s1);
	while (i < n)
	{
		dest[i] = src[i];
		if (dest[i] == ptr)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
