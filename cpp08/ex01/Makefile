NAME = Span

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Span.cpp main.cpp
HDR = Span.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re