NAME = exec
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp main.cpp
HDR = ClapTrap.hpp

OBJ = $(SRC:.cpp=.o)

all:
	$(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


