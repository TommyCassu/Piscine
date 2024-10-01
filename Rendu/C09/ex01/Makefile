# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 21:58:32 by tcassu            #+#    #+#              #
#    Updated: 2024/09/24 22:30:47 by tcassu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c

SRCS 		= ${addprefix ${PRESRC}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRESRC		= ./srcs/

INCLUDES	= ./includes/

NAME		= libft.a

AR			= ar rc

RM			= rm -f

RANLIB		= ranlib

GCC			= gcc

CFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RANLIB} ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
			