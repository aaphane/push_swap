/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaphane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 06:05:30 by aaphane           #+#    #+#             */
/*   Updated: 2019/08/19 13:24:55 by aaphane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"
# include <sys/uio.h>

# define BUFF_SIZE 32
# define ERROR -1
# define EMPTY 0
# define TRUE 1
# define START 0

int		get_next_line(int const fd, char **line);

#endif
