# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 12:35:41 by dchonvil          #+#    #+#              #
#    Updated: 2021/07/30 04:57:50 by dchonvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

MORE = bns

LIB = libft/libft.a

SRC = ft_printf.c \
     	interpreter.c \
     	tools.c

SRC2 = ft_printf_bonus.c \
     	interpreter.c \
     	tools.c \
     	interpreter_bonus.c \
        tools_bonus.c \
        method_bonus.c \
        check_arg_bonus.c

OBJ = $(SRC:.c=.o)

OBJ2 = $(SRC2:.c=.o)

OBJ3 = libft/*.o

RM = rm -rf

MK = make

all: $(NAME)

libftprintf.a: $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(MORE)

bns: fclean $(OBJ2)
	(cd libft && make)
	ar rcs $(NAME) $(OBJ2) $(OBJ3)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ2)
	(cd libft && $(MK) clean)

fclean: clean
	$(RM) $(NAME)
	cd libft && $(MK) fclean

re: fclean all
