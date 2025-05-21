CO_NAME = Colleen
GR_NAME = Grace
SU_NAME = Sully

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CO_SRC = Colleen.c
GR_SRC = Grace.c
SU_SRC = Sully.c

all: $(CO_NAME) $(GR_NAME) $(SU_NAME)

$(CO_NAME): $(CO_SRC)
	@$(CC) $(CFLAGS) -o $(CO_NAME) $(CO_SRC)
	@echo "\n Colleen compiled \n"

$(GR_NAME): $(GR_SRC)
	@$(CC) $(CFLAGS) -o $(GR_NAME) $(GR_SRC)
	@echo "\n Grace compiled \n"

$(SU_NAME): $(SU_SRC)
	@$(CC) $(CFLAGS) -o $(SU_NAME) $(SU_SRC)
	@echo "\n Sully compiled \n"

clean:
	@echo "\n No object files found to clean \n"

fclean: clean
	@rm -rf $(CO_NAME) $(GR_NAME) $(SU_NAME)
	@echo "\n Executables removed  \n"

suclean: fclean
	@rm -rf Sully_*
	@rm -rf Grace_kid.c
	@echo "\n Sullies cleaned \n"

re: fclean all

.PHONY: all fclean clean suclean re
