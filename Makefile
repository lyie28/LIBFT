# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 15:28:45 by lyie              #+#    #+#              #
#    Updated: 2021/04/30 12:08:57 by lyie             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard ./ft_s*.c) $(wildcard ./ft_mem*.c) $(wildcard ./ft_is*.c) $(wildcard ./ft_to*.c) $(wildcard ./ft_put*.c) ft_itoa.c ft_atoi.c ft_bzero.c ft_calloc.c

BONUS_SRCS = $(wildcard ./ft_lst*.c) 

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

INCLUDES = includes/

NAME = libft.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.c=.o}
			
$(NAME) : ${OBJS}
		$ ar rc libft.a ${OBJS}

bonus: ${BONUS_OBJS}
	$ ar rc libft.a ${BONUS_OBJS}

all: ${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
