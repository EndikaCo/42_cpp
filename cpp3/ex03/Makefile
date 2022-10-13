# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 11:01:56 by ecorreia          #+#    #+#              #
#    Updated: 2022/07/05 10:02:22 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03_Now_its_weird!
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -g3 -std=c++98 -pedantic -fsanitize=address
RM		=	rm -rf
FILES	=	src/ClapTrap	\
			src/ScavTrap	\
			src/FragTrap	\
			src/DiamondTrap	\
			src/main	
					
SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))

$(NAME): $(OBJS) $(SRCS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo compilado ok

all: $(NAME)

.c.o:
	@$(CC) $(FLAGS) -cpp -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re