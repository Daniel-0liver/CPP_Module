COLOUR_GREEN=\033[1;32m
COLOUR_YELLOW=\033[1;33m
COLOUR_GREY=\033[1;30m
COLOUR_END=\033[0m

NAME = ex00

SRC = megaphone.cpp

CC = c++

INC = -I .

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(NAME): $(SRC)
		@ $(CC) $(FLAGS) $(INC) $(SRC) $(LIB) -o $(NAME)
		@echo "$(COLOUR_GREEN)$(NAME) is ready to use $(COLOUR_END)"

all : $(NAME)

valgrind: clean all
		valgrind ./$(NAME)

valgrindfull: re
		valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
		@ $(RM) $(NAME)
		@echo "$(COLOUR_YELLOW)$(NAME) cleaned $(COLOUR_END)"

fclean:	clean
		@rm -rf $(NAME)

re: clean all
