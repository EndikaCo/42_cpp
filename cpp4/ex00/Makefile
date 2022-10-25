# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 12:08:30 by ecorreia          #+#    #+#              #
#    Updated: 2022/07/06 11:55:38 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00_Polymorphism
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 -pedantic -fsanitize=address
RM		=	rm -rf
FILES	=	src/main		\
			src/Animal		\
			src/Cat			\
			src/Dog			\
			src/WrongAnimal	\
			src/WrongCat	
					
SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo compilado ok

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re