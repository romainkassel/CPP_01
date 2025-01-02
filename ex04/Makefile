NAME = sedIsForLooooooosers

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES = $(SRCS)main.cpp $(SRCS)check_args.cpp $(SRCS)manage_files.cpp
OFILES = $(CPPFILES:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CC) $(FLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re