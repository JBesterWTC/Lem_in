# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbester <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 10:24:37 by jbester           #+#    #+#              #
#    Updated: 2016/07/15 13:03:16 by jbester          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

NAME2 = libft/libft.a

SRCS = main.c

DIR = "libft"

FLAGS = -Wall -Werror -Wextra

$(NAME):
	@make -C $(DIR)
	@echo "Compiling library..."
	@gcc -o $(NAME) $(SRCS) $(NAME2) $(FLAGS)
	@echo "Compiling Lem_in..."
	@echo "Compiled."

all: $(NAME)

clean:
	@make clean -C $(DIR)
	@echo "Cleaned"

fclean:
	@make fclean -C $(DIR)
	@rm -f lem-in
	@echo "Destroyed"

re: fclean all
