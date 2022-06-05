# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 20:08:33 by ecorreia          #+#    #+#              #
#    Updated: 2022/05/29 20:08:34 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= clang++
FLAGS	= -Werror -Wextra -Wall
RM		= rm -rf
FILES	= megaphone
SRCS 	= $(addsuffix .cpp, $(FILES))
OBJS 	= $(addsuffix .o, $(FILES))

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