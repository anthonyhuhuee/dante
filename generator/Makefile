##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC = 	main.c 							\
		error_handling.c				\
		map/empty_map_generator.c		\
		map/check_map_infos.c			\
		map/change_map_infos.c			\
		map/put_wall_in_map.c			\
		map/print_map.c					\
		map/put_perfect_end.c			\
		free_all.c						\
		cursor/check_cursor_corner.c	\
		cursor/init_cursor.c 			\
		move/move_back.c 				\
		move/basic_movment.c 			\
		move/all_move.c 				\
		generator.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

NAME = generator

CFLAGS = -Wall -Wextra -Werror -I../include/

LDFLAGS		=	-L./src/lib

LDLIBS		=	-lmy

LIB			=	./src/lib/libmy.a

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIB):
	make -C ./src/lib/my

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re unit_tests run_tests tests_run
