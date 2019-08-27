# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaphane <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 07:51:06 by aaphane           #+#    #+#              #
#    Updated: 2019/08/20 08:37:10 by aaphane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
SOURCES =	ft_build_stack.c\
			ft_print_list.c\
			ft_reverse_rotate.c\
			ft_swap_nodes.c\
			ft_pop.c\
			ft_rotate.c\
			ft_push_to_stack.c\
			ft_apply_instructions.c\
			ft_sort_list.c\
			ft_validnumber.c\
			ft_numboverflow.c\
			ft_validcommand.c\
			ft_duplicatenum.c\
			ft_bubble_sort.c\
			ft_list_size.c\
			ft_find_max.c\
			ft_find_min.c\
			ft_median.c\
			ft_get_copy.c\
			ft_sort_three.c\
			ft_sort_four.c\
			ft_sort_two.c\
			ft_sort_five.c\
			ft_sort_ten.c\
			ft_index.c\
			ft_rev_bubble_sort.c\
			ft_rev_index.c
OBJECTS =	ft_build_stack.o\
			ft_print_list.o\
			ft_reverse_rotate.o\
			ft_swap_nodes.o\
			ft_pop.o\
			ft_rotate.o\
			ft_push_to_stack.o\
			ft_apply_instructions.o\
			ft_sort_list.o\
			ft_validnumber.o\
			ft_numboverflow.o\
			ft_validcommand.o\
			ft_duplicatenum.o\
			ft_bubble_sort.o\
			ft_list_size.o\
			ft_find_max.o\
			ft_find_min.o\
			ft_median.o\
			ft_get_copy.o\
			ft_sort_three.o\
			ft_sort_four.o\
			ft_sort_two.o\
			ft_sort_five.o\
			ft_sort_ten.o\
			ft_index.o\
			ft_rev_bubble_sort.o\
			ft_rev_index.o

all: $(NAME)

$(NAME):
	@ make -C libft/
	@$(CC) $(CFLAGS) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@gcc checker.c -Wall -Werror -Wextra push.a libft/libft.a -o checker
	@gcc ft_push_swap.c push.a libft/libft.a -o push_swap
.PHONY: clean
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)
	@rm -f checker push_swap
	@make fclean -C libft/
re: fclean all
