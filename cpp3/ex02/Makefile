# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 11:01:56 by ecorreia          #+#    #+#              #
#    Updated: 2022/06/28 10:19:39 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02_Repetitive_work
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -g -fsanitize=address
RM		=	rm -rf
FILES	=	src/ClapTrap	\
			src/ScavTrap	\
			src/FragTrap	\
			src/main	
					
SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))

$(NAME): $(OBJS) $(SRCS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo compilado ok

all: $(NAME)

.c.o: $(FILES)
	@$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re