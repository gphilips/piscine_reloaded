# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gphilips <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 13:45:59 by gphilips          #+#    #+#              #
#    Updated: 2016/11/03 13:47:09 by gphilips         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCDIR = srcs/

HEADER = includes/

SRC = $(addprefix $(SRCDIR), $(FILES))

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

all: $(NAME)

$(NAME) :
			gcc $(OPTION) $(SRC)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean :
			/bin/rm -f $(OBJ)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
