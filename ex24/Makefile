#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkarri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 19:50:55 by tkarri            #+#    #+#              #
#    Updated: 2019/04/02 19:59:10 by tkarri           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAGS = -c -Wall -Werror -Wextra -I

SRCSDIR = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
			./srcs/ft_strlen.c ./srcs/ft_swap.c

INCLDIR = ./includes/

all:
		@gcc $(FLAGS) $(INCLDIR) $(SRCSDIR)
		@ar -rc $(NAME) *.o

clean:
		@/bin/rm -f *.o

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
