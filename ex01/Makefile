NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = contact.cpp phonebook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
