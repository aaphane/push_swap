/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:00:59 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:01:05 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dest || src)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (dest);
	}
	return (NULL);
}
