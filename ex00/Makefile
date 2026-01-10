Name= megaphone

SRC= megaphone.cpp

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

fclean:
	rm -f $(Name)

re: fclean all

.PHONY: clean fclean re all
