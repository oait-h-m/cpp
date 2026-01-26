NAME = Harl
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Harl.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
