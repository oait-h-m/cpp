NAME = exec
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = WrongAnimal.cpp WrongCat.cpp main.cpp
HDR = WrongAnimal.hpp WrongCat.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

