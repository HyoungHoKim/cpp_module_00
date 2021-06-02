CPP = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 

SRCS = phone_book.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phone_book

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
