# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luis <luis@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 12:46:55 by luis              #+#    #+#              #
#    Updated: 2023/01/27 17:29:01 by luis             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

UTILS = ft_printf.c \
		ft_print_hexa.c \
		ft_print_utils.c \
		ft_choose_format.c \
		ft_putint.c

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