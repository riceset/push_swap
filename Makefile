# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 15:02:54 by tkomeno           #+#    #+#              #
#    Updated: 2022/09/20 17:18:59 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

INCLUDES		=	-I ./includes -I ./libft/includes

CFLAGS 			=	-Wall -Werror -Wextra $(INCLUDES)

LIBFT_PATH 		= 	./libft

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

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	$(CC) $(OBJS) -o $(NAME) -L$(LIBFT_PATH) -lft

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_PATH)

fclean:
	$(RM) $(OBJS) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
