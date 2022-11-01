
NAME	=	ex03_At_least_this_beats_coffee_making
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98 -pedantic -fsanitize=address
RM		=	rm -rf
FILES	=	src/main					\
			src/Bureaucrat				\
			src/Form					\
			src/RobotomyRequestForm		\
			src/PresidentialPardonForm	\
			src/Intern					\
			src/ShrubberyCreationForm


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