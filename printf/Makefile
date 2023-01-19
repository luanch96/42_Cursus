# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luis <luis@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 14:48:02 by luisanch          #+#    #+#              #
#    Updated: 2023/01/19 16:03:13 by luis             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

UTILS = ft_printf.c ft_putchar.c ft_putstr.c \
		

OBJS = $(UTILS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		
re: fclean $(NAME)

.PHONY: all clean fclean re bonus