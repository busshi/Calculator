# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldubar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 11:09:42 by aldubar           #+#    #+#              #
#    Updated: 2019/11/14 11:14:21 by aldubar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c srcs/parse.c srcs/ft_ft.c

OBJS	= $(SRCS:.c=.o)

HEADER	= includes

NAME	= calculate

CC		= @gcc

FLAGS	= -Wall -Wextra -Werror

RM		= @rm -f

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -I$(HEADER) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
