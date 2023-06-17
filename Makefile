##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

all:
	make -C ./solver
	make -C ./generator

clean:
	make -C ./solver clean
	make -C ./generator clean

fclean:
	make -C ./solver fclean
	make -C ./generator fclean

re:		fclean all

unit_tests: fclean all
	make unit_tests -C tests/

run_tests: unit_tests
	make run_tests -C tests/

tests_run: unit_tests
	make tests_run -C tests/

.PHONY: all clean fclean re unit_tests run_tests tests_run
