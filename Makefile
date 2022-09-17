# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 15:02:54 by tkomeno           #+#    #+#              #
#    Updated: 2022/09/17 16:05:53 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

LIBFT			=	libft.a

INCLUDES		=	-I ./includes -I ./libft/includes

CFLAGS 			=	-Wall -Werror -Wextra $(INCLUDES)

FILES			=	main.c \
					coordinate_compression.c \
					puterror.c \
					stacksinit.c \
					improved_atoi.c \
					insert_argv_to_list.c \
					is_overlapping.c \
					is_sorted.c \
					radix_sort.c \
					sort.c \
					sort_3.c \
					sort_any.c \
					operations/push.c \
					operations/reverse_rotate.c \
					operations/rotate.c \
					operations/swap.c \
					cdll/cdll_freeall.c \
					cdll/cdll_lstadd_back.c \
					cdll/cdll_lstadd_first.c \
					cdll/cdll_lstadd_front.c \
					cdll/cdll_lstclear.c \
					cdll/cdll_lstinit.c \
					cdll/cdll_lstnew.c

SRCS 			=	$(addprefix sources/,$(FILES))

OBJS 			=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -L./libft -lft

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C ./libft

fclean:
	$(RM) $(OBJS) $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

$(LIBFT):
	$(MAKE) -C ./libft

.PHONY: all clean fclean re
