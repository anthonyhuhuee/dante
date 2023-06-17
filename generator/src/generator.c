/*
** EPITECH PROJECT, 2023
** function
** File description:
** function
*/

#include "generator.h"

void action_loop(structured_map_t **map, gen_cursor_t *cursor,
bool perfect_maze)
{
    int move_int = 0, number_of_move = 1;
    move_int = rand() % 4;
    if (perfect_maze == true)
        number_of_move = 2;
    for (int count = 0; count != number_of_move; count += 1) {
        if (all_move(map, cursor, move_int, perfect_maze) == SUCCESS) {
            change_map_infos(map, cursor);
        }
        if (check_cursor_corner(map, cursor) == FAILURE) {
            move_back(map, cursor);
        }
    }
}

int marge_simpson_generator(int x, int y)
{
    int result = 0;
    result = ((x * y) * 0.002);
    return result;
}

int maze_generator(char **arg, bool perfect_maze)
{
    structured_map_t **map = malloc(sizeof(structured_map_t));
    gen_cursor_t *cursor = malloc(sizeof(gen_cursor_t));
    srand(time(NULL));
    int x = my_getnbr(arg[1]), y = my_getnbr(arg[2]);
    map = empty_map_generator(x, y);
    init_cursor(cursor, map);
    if (perfect_maze == true) {
        put_perfect_end(map, y, x);
        cursor->total_visited += 1;
    }
    while (!(cursor->pos_x == 0 && cursor->pos_y == 0 &&
    cursor->total_visited > 2)) {
        action_loop(map, cursor, perfect_maze);
    }
    print_map(map, x, y);
    free_all(map, cursor);
    return SUCCESS;
}

int choice_of_gen(int argc, char **arg)
{
    bool perfect_maze = false;
    if (argc == 4)
        perfect_maze = true;
    if (maze_generator(arg, perfect_maze) == SUCCESS)
        return SUCCESS;
    return FAILURE;
}
