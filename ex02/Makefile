NAME = bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MD -std=c++98

BIN = bin/
			
SRC =	main.cpp Bureaucrat.cpp Form.cpp	\

OBJ = $(SRC: .cpp=.o)
OBJ := $(addprefix $(BIN), $(SRC:.cpp=.o))
DEPS =   $(OBJ:.o=.d)

all: $(BIN) $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(BIN)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -rf $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
