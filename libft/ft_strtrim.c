/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:17:29 by aaphane           #+#    #+#             */
/*   Updated: 2019/06/27 15:17:38 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n'
				|| s[j] == '\t') && j > i - 1)
		j--;
	if (!(str = (char*)ft_memalloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
