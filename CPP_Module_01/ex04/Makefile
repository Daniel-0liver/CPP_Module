GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

NAME		=	ex04

HEADER		=	./includes

OBJ			=	$(patsubst src%, obj%, $(SRC:.cpp=.o))

SRC			=	main.cpp

CC			=	c++

FLAGS		=	-I${HEADER} -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $@ $^


obj/%.o:	src/%.cpp
			@$(CC) $(FLAGS) -o $@ -c $<
			@echo "$@ $(GREEN)created$(RESET)"

valgrind:	all
	valgrind --leak-check=full --show-leak-kinds=all --quiet

clean:
			@rm -rf $(OBJ) obj
			@echo "Object files $(RED)removed.$(RESET)"

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all valgrind clean fclean re