GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
GREY		=	\033[1;30m
COLOUR_END	=	\033[0m

NAME 		= 	ex01

SRC 		=	./src/main.cpp

CC 			=	c++

INC			=	-I ./includes

FLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

$(NAME): $(OBJS)
		@ $(CC) $(FLAGS) $(INC) $(SRC) $(LIB) -o $(NAME)
		@echo "$(GREEN)$(NAME) is ready to use $(COLOUR_END)"

all : $(NAME)

clean:
		@ $(RM) $(NAME)
		@echo "$(YELLOW)$(NAME) cleaned $(COLOUR_END)"

run: clean all
		@echo "$(GREY)./$(NAME) $(COLOUR_END)"
		@./$(NAME)

valgrind: clean all
		valgrind ./$(NAME)

valgrindfull: re
		valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

re: clean all

.PHONY: clean all re valgrind valgrindfull