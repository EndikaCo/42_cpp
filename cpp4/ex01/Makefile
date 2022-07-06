# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 12:08:30 by ecorreia          #+#    #+#              #
#    Updated: 2022/07/06 12:57:49 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01_I dont_want_to_set_the_world_on_fire
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -fsanitize=address
RM		=	rm -rf
FILES	=	src/main		\
			src/Animal		\
			src/Cat			\
			src/Dog			\
			src/WrongAnimal	\
			src/WrongCat	
					
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