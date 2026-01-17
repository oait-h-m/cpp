NAME = Zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
