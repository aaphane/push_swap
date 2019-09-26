/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 06:05:01 by aaphane           #+#    #+#             */
/*   Updated: 2019/09/06 21:50:26 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*str[19960630];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			reader;

	if (fd < EMPTY || !line)
		return (ERROR);
	while ((reader = read(fd, buffer, BUFF_SIZE)) > EMPTY)
	{
		buffer[reader] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	if (reader < EMPTY)
		return (ERROR);
	else if (reader == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (EMPTY);
	return (ft_getnewline(str, line, fd, reader));
}
