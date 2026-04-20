NAME = exec
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ScalarConverter.cpp main.cpp
HDRS = ScalarConverter.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$NAME: $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
