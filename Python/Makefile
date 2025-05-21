CO_SRC = Colleen.py
GR_SRC = Grace.py
SU_SRC = Sully.py

all:

clean:
	@echo "\n No object files found to clean \n"

fclean: clean
	@echo "\n No executables found to clean  \n"

suclean: fclean
	@rm -rf Sully_*
	@rm -rf Grace_kid.py
	@echo "\n Sullies cleaned \n"

re: fclean all

.PHONY: all fclean clean suclean re
