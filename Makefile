# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 15:02:54 by tkomeno           #+#    #+#              #
#    Updated: 2022/09/14 16:49:12 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
CFLAGS 			=	-Wall -Werror -Wextra -I includes

SRCS 			=	$(shell find . -name "*.c" -type f)
OBJS 			=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(LL_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
