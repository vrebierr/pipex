# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/10 12:21:54 by vrebierr          #+#    #+#              #
#    Updated: 2014/05/10 12:21:55 by vrebierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
SRC = pipex.c
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra -O3 -g
LFLAGS = -L $(LDIR) -lft
LDIR = libft/

all: $(NAME)

$(NAME):
	make -C $(LDIR)
	gcc -c $(FLAGS) $(SRC) -I $(LDIR)inc
	gcc -o $(NAME) $(OBJS) $(LFLAGS)

clean:
	make clean -C $(LDIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
