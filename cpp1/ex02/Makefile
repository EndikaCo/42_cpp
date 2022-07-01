# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 11:01:56 by ecorreia          #+#    #+#              #
#    Updated: 2022/07/01 11:11:00 by ecorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02_HI_THIS_IS_BRAIN
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -fsanitize=address
RM		=	rm -rf
FILES	=	main	
					
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