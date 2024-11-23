# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 11:43:00 by aoussama          #+#    #+#              #
#    Updated: 2024/11/23 19:57:51 by aoussama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_hexadecimal.c ft_printf.c ft_putnbr.c ft_uns_putnbr.c \
      ft_calc_nb.c ft_pointer.c ft_putchar.c ft_putstr.c

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.c=.o}

all: ${NAME}

%.o: %.c
	@${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: clean fclean all re
