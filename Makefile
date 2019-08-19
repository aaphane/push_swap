# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaphane <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 07:51:06 by aaphane           #+#    #+#              #
#    Updated: 2019/08/19 07:51:21 by aaphane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES =	ft_build_stack.c\
			ft_print_list.c\
			ft_reverse_rotate.c\
			ft_swap_nodes.c\
			ft_pop.c\
			ft_rotate.c\
			ft_push_to_stack.c
OBJECTS =	ft_build_stack.o\
			ft_print_list.o\
			ft_reverse_rotate.o\
			ft_swap_nodes.o\
			ft_pop.o\
			ft_rotate.o\
			ft_push_to_stack.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
.PHONY: clean
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
