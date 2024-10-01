NAME = rush-02

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/
INCLUDES = includes/

.PHONY: all
all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC)*.c -I $(INCLUDES) -o $(NAME) 

.PHONY: clean
clean: 
	rm -f $(OBJ)

.PHONY: fclean
fclean: 
	rm -f $(NAME) $(OBJ)

.PHONY: re
re: 
	rm -f $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(SRC)*.c -I $(INCLUDES) -o $(NAME)