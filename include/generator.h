/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#ifndef generator_
    #define generator_
    #define UP 0
    #define RIGHT 1
    #define DOWN 2
    #define LEFT 3
    #define CURSOR_X cursor->pos_x
    #define CURSOR_Y cursor->pos_y
    #define END_MAP_Y y - 1
    #define END_MAP_X x - 1
    #define LAST_CHAR_UP y - 2
    #define LAST_CHAR_LEFT x - 2

    #include "dante.h"
    #include "lib.h"

typedef struct cell_info_s {
    char char_map;
    int previous_cell_x;
    int previous_cell_y;
    bool visited_cell;
    bool can_be_wall;
} structured_map_t;

typedef struct gen_cursor_s {
    int pos_x;
    int pos_y;
    int total_visited;
} gen_cursor_t;

int error_handling_gen(int argc, char **arg);
int choice_of_gen(int argc, char **arg);
int maze_generator(char **arg, bool perfect_maze);

void init_cursor(gen_cursor_t *cursor, structured_map_t **map);
int check_cursor_corner(structured_map_t **map, gen_cursor_t *cursor);
void put_perfect_end(structured_map_t **map, int x, int y);

int all_move(structured_map_t **map, gen_cursor_t *cursor, int move_int,
bool perfect_maze);

void basic_movment(structured_map_t **map, gen_cursor_t *cursor,
bool perfect_maze);
int up_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze);
int down_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze);
int right_move(structured_map_t **map, gen_cursor_t *cursor,
bool perfect_maze);
int left_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze);

int move_back(structured_map_t **map, gen_cursor_t *cursor);

structured_map_t **empty_map_generator(int x, int y);
void print_map(structured_map_t **map, int x, int y);

int change_map_infos(structured_map_t **map, gen_cursor_t *cursor);
int check_up_map_infos(structured_map_t **map, gen_cursor_t *cursor);
int check_down_map_infos(structured_map_t **map, gen_cursor_t *cursor);
int check_right_map_infos(structured_map_t **map, gen_cursor_t *cursor);
int check_left_map_infos(structured_map_t **map, gen_cursor_t *cursor);

int put_wall_up(structured_map_t **map, gen_cursor_t *cursor);
int put_wall_down(structured_map_t **map, gen_cursor_t *cursor);
int put_wall_right(structured_map_t **map, gen_cursor_t *cursor);
int put_wall_left(structured_map_t **map, gen_cursor_t *cursor);

int free_all(structured_map_t **map, gen_cursor_t *cursor);

#endif /* !generator_ */
