# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmtana <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 03:33:12 by mmtana            #+#    #+#              #
#    Updated: 2018/09/23 01:58:41 by mmtana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	lem-in

SRC		=	srcs/main.c srcs/parser.c srcs/ft_error.c srcs/add_room.c\
			srcs/is_valid.c srcs/find_room.c srcs/set_weights.c srcs/algo.c

OBJ		=	$(SRC:.c=.o)

%.o:%.c
			@echo " - Creating $<..."
			@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

CFLAGS	=	-Wall -Wextra -Werror -Ofast 

INC		=	-Iincludes -Ilibft

LIB		=	-L ./libft -lft

CC		= 	gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INC) $(LIB)

clean:
	@echo " - Cleaning object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo " - Cleaning binary..."
	@make fclean -C libft/
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
