# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gphilips <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:33:59 by gphilips          #+#    #+#              #
#    Updated: 2016/11/03 19:45:53 by gphilips         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_string.c display_file.c

FLAG = -Wall -Werror -Wextra

HEADER = ft_display_file.h

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) :
		gcc $(FLAG) -c $(SRCS)
		gcc $(FLAG) $(OBJ) -o $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
