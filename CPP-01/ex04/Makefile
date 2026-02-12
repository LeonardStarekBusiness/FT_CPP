NAME = ex04

CFLAGGEN = -Wall -Wextra -Werror -std=c++98

CC = c++

QUELLE_DATEIEN = main.cpp

OBJEKT_DATEIEN = $(QUELLE_DATEIEN:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGGEN) -c $< -o $@

$(NAME): $(OBJEKT_DATEIEN)
	$(CC) $(CFLAGGEN) $(OBJEKT_DATEIEN) $(LIBNAME) -o $(NAME)

clean: 
	rm -f $(OBJEKT_DATEIEN)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re