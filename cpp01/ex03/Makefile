NAME = Human
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
