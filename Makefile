#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/23 20:14:10 by evoisin           #+#    #+#              #
#    Updated: 2015/01/30 15:21:23 by evoisin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

SRC = main.c ft_isrange.c op_ss.c ft_alloc.c op_rr.c

HEAD = pushswap.h

CFLAGS = -Wall -Werror -Wextra

FLAGSLIBFT = -L libft -lft -I libft/includes

$(NAME):
		@make -C libft/
		@gcc $(CFLAGS) -o $(NAME) $(SRC) $(HEAD) $(FLAGSLIBFT)
		@echo "\033[1;37;40mOk. \033[0m"

all : $(NAME)

clean : 
		@rm -f $(OSRC)

fclean : clean
		@make -C libft/ fclean
		@rm -rf $(NAME)

re : fclean all 
