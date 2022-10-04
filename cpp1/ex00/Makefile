# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 11:01:56 by ecorreia          #+#    #+#              #
#    Updated: 2022/06/29 20:32:40 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00_BraiiiiiiinnnzzzZ
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98 -pedantic
RM		=	rm -rf
FILES	=	src/Zombie 	\
			src/newZombie	\
			src/main	\
			src/randomChump	\
					
SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))

$(NAME): $(OBJS) $(SRCS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo compilado ok

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re