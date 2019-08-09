/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:04:24 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:04:28 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;
	int		i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	s2 = (char*)malloc(sizeof(*s2) * (len + 1));
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
