# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msharpe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 09:57:32 by msharpe           #+#    #+#              #
#    Updated: 2016/08/30 19:20:33 by msharpe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILENAMES	= ft_putchar.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putstr.c
NAME		= libft.a
CC			= gcc
SRCS		= $(addprefix srcs/, $(FILENAMES))
OBJS		= $(FILENAMES:.c=.o)
CFLAGS 		= -c -Wall -Wextra -Werror -I includes/

all: $(NAME)


$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
	rm -f all
