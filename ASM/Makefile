CO_NAME = Colleen
GR_NAME = Grace
SU_NAME = Sully

ASM = nasm
LNK = gcc

CO_SRC = Colleen.s
GR_SRC = Grace.s
SU_SRC = Sully.s

CFLAGS = -f elf64
LFLAGS = -no-pie

CO_OBJ = Colleen.o
GR_OBJ = Grace.o
SU_OBJ = Sully.o

all: $(CO_NAME) $(GR_NAME) $(SU_NAME)

$(CO_NAME): $(CO_SRC)
	@$(ASM) $(CFLAGS) -o $(CO_OBJ) $(CO_SRC)
	@$(LNK) $(LFLAGS) -o $(CO_NAME) $(CO_OBJ)
	@echo "\n Colleen compiled \n"

$(GR_NAME): $(GR_SRC)
	@$(ASM) $(CFLAGS) -o $(GR_OBJ) $(GR_SRC)
	@$(LNK) $(LFLAGS) -o $(GR_NAME) $(GR_OBJ)
	@echo "\n Grace compiled \n"

$(SU_NAME): $(SU_SRC)
	@$(ASM) $(CFLAGS) -o $(SU_OBJ) $(SU_SRC)
	@$(LNK) $(LFLAGS) -o $(SU_NAME) $(SU_OBJ)
	@echo "\n Sully compiled \n"

clean:
	@rm -rf $(CO_OBJ) $(GR_OBJ) $(SU_OBJ)
	@echo "\n Object files removed \n"

fclean: clean
	@rm -rf $(CO_NAME) $(GR_NAME) $(SU_NAME)
	@echo "\n Executables destroyed  \n"

suclean: fclean
	@rm -rf Sully_*
	@rm -rf Grace_kid.s
	@echo "\n Sullies cleaned \n"

re: fclean all

.PHONY: all fclean clean suclean re
