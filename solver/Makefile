##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC = 	main.c \
		solver.c \
		errors_handling.c \
		free_maze.c \
		print_maze.c \
		change_char_path.c \
		is_it_the_start.c \
		init_map/init_maze.c \
		init_map/load_file_in_mem.c \
		init_map/get_size.c \
		init_map/init_case_to_check.c \
		algorithm/get_possible_cases.c \
		algorithm/is_it_the_goal.c \
		algorithm/cost_functions/find_best_cost.c \
		algorithm/cost_functions/find_best_pos.c \
		algorithm/cost_functions/get_h_cost.c \
		algorithm/cost_functions/update_cost.c \
		algorithm/lists_functions/add_to_list.c \
		algorithm/lists_functions/is_case_in_list.c \
		algorithm/lists_functions/is_case_to_check_empty.c \
		algorithm/lists_functions/remove_from_list.c \
		algorithm/lists_functions/update_list.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

NAME = solver

CFLAGS = -Wall -Wextra -Werror -I../include/

LDFLAGS = -L./src/lib

LDLIBS = -lmy

LIB = ./src/lib/libmy.a

$(NAME): $(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIB):
	make -C ./src/lib/my

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re unit_tests run_tests tests_run
