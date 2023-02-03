# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 16:56:40 by luisanch          #+#    #+#              #
#    Updated: 2023/02/02 16:56:44 by luisanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

UTILS = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_print_hexa.c \
		ft_putint.c \
		ft_printunsigned.c

OBJS = $(UTILS:.c=.o)		
		
all : $(NAME)

$(NAME): $(OBJS)
		 ar rcs $(NAME) $(OBJS)

clean: 
		 $(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean re  bonus