/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:16:24 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:16:29 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0' && needle[i] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && str[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
		{
			return ((char*)str + i);
		}
		i++;
	}
	return (0);
}
