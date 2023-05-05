CO_NAME = Colleen

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CO_SRC = Colleen.c

all: $(CO_NAME)

$(CO_NAME): $(CO_SRC)
	@$(CC) $(CFLAGS) -o $(CO_NAME) $(CO_SRC)
	@echo "\n Program compiled \n"

clean:
	@echo "\n No objects to clean \n"

fclean: clean
	@rm -rf $(NAME)
	@echo "\n Executables destroyed  \n"

re: fclean all

.PHONY: all fclean clean re
