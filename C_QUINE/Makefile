CO_NAME = Colleen
GR_NAME = Grace

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CO_SRC = Colleen.c
GR_SRC = Grace.c

all: $(CO_NAME) $(GR_NAME)

$(CO_NAME): $(CO_SRC)
	@$(CC) $(CFLAGS) -o $(CO_NAME) $(CO_SRC)
	@echo "\n Colleen compiled \n"

$(GR_NAME): $(GR_SRC)
	@$(CC) $(CFLAGS) -o $(GR_NAME) $(GR_SRC)
	@echo "\n Grace compiled \n"

clean:
	@echo "\n No objects to clean \n"

fclean: clean
	@rm -rf $(CO_NAME) $(GR_NAME)
	@echo "\n Executables destroyed  \n"

re: fclean all

.PHONY: all fclean clean re
