NAME = bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MD -std=c++98
CXXFLAGSDEBUG = -Wall -Wextra -MD -std=c++98 -g3

BIN = bin/
			
SRC =	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp	\

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

debug:
	@$(MAKE) $(NAME)
CXXFLAGS="$(CXXFLAGSDEBUG)"

.PHONY: all clean fclean re debug

-include $(DEPS)
