/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:53:45 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 14:53:50 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *charsrc;
	char *chardst;

	if (dst == NULL && src == NULL)
		return (NULL);
	charsrc = (char*)src;
	chardst = (char*)dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	if (dst > src)
	{
		while (len > 0)
		{
			chardst[len - 1] = charsrc[len - 1];
			len--;
		}
	}
	return (dst);
}
