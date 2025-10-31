CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror -Iinc

SRCS = main.cpp \
	   srcs/Fixed.cpp

INC = inc/Fixed.hpp

NAME = fixedDecimal

OBJS_DIR = objects/
OBJS = $(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
