NAME = exec
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -rf $(NAME)

re: all fclean

.PHONY: all fclean re
