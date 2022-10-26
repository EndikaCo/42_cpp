
NAME	=	ex00_Mommy_when_I_grow_up_I_want_to_be_bureaucrat!
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 -pedantic -fsanitize=address
RM		=	rm -rf
FILES	=	src/main			\
			src/Bureaucrat


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