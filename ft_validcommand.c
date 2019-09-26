/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validcommand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:10:02 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/06 23:44:57 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push.h"

int		ft_validcommand(char *str)
{
	char	**command;
	int		i;
	char	*s;

	i = 0;
	s = "sa sb ss ra rb rr pa pb rra rrb rrr";
	command = ft_strsplit(s, ' ');
	while (command[i])
	{
		if (ft_strcmp(command[i], str) == 0)
		{
			i = 0;
			while (i < 11)
			{
				ft_strdel(&command[i]);
				i++;
			}
			free(command);
			return (0);
		}
		i++;
	}
	return (-1);
}
