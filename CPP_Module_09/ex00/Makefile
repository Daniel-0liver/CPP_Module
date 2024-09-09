GREEN		= 	\033[0;32m
RED			= 	\033[0;31m
RESET		= 	\033[0m

NAME		=	btc

HEADER		=	./includes

OBJ			=	$(patsubst src%, obj%, $(SRC:.cpp=.o))

SRC			=	src/main.cpp \
				src/BitcoinExchange.cpp

CC			=	c++

FLAGS		=	-I${HEADER} -Wall -Wextra -Werror -std=c++98

all:		obj $(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $@ $^

obj:
			@mkdir -p obj

obj/%.o:	src/%.cpp
			@$(CC) $(FLAGS) -o $@ -c $<
			@echo "$@ $(GREEN)created$(RESET)"

clean:
			@rm -rf $(OBJ) obj
			@echo "Object files $(RED)removed.$(RESET)"

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re