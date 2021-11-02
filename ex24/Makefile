# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 14:34:50 by ghorvath          #+#    #+#              #
#    Updated: 2021/10/31 10:59:29 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc	-Wall	-Wextra	-Werror
NAME			=	libft.a
SOURCE_PATH		=	./srcs/
SRCS			=	$(SOURCE_PATH)ft_putchar.c	$(SOURCE_PATH)ft_putstr.c	\
					$(SOURCE_PATH)ft_strcmp.c	$(SOURCE_PATH)ft_strlen.c	\
					$(SOURCE_PATH)ft_swap.c
OBJECTS			=	ft_putchar.o	\
					ft_putstr.o	ft_strcmp.o	\
					ft_strlen.o	ft_swap.o
INCLUDES			=	./includes/
HEADER			=	-c	-I	$(INCLUDES)

all:	$(NAME)

$(NAME):
	$(CC)	-c	$(SRCS)	-c	-I	$(INCLUDES)
	ar	rc	$(NAME)	$(OBJECTS)

clean:
	/bin/rm	-f	$(OBJECTS)

fclean:
	make	clean
	/bin/rm	-f	$(NAME)

re:	fclean	all
