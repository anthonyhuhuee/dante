/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#ifndef solver_
    #define solver_

    #include "dante.h"
    #include "lib.h"
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <limits.h>

typedef struct axes_s {
    int wid;
    int len;
} axes_t;

typedef struct case_s {
    char character;
    axes_t position;
    int total_cost;
    int cost_goal;
    int cost_start;
} case_t;

int solver(char const *filepath);
int errors_handling(int argc, char **argv);
char *load_file_in_mem(char const *filepath);
case_t **init_maze(axes_t maze_size, char *content);
void free_maze(case_t **maze, axes_t maze_size, axes_t *list_1, axes_t *list_2);
int get_width(char *content);
int get_length(char *content);
axes_t get_maze_size(char *content);
axes_t *init_case_to_check(axes_t maze_size);
axes_t *init_case_checked(axes_t maze_size);
int is_it_the_goal(axes_t cursor, axes_t maze_size, case_t **maze);
int get_h_cost(axes_t position, axes_t maze_size);
int is_case_to_check_empty(axes_t *case_to_check);
axes_t find_best_cost(case_t **maze, axes_t maze_size);
axes_t *get_possible_cases(case_t **maze, axes_t cursor, axes_t maze_size);
case_t **update_cost(case_t **maze, axes_t *cases, int cost, axes_t size);
axes_t *update_list(axes_t *cases, axes_t *case_checked, axes_t *case_check);
int is_case_in_check_cases(axes_t *case_checked, axes_t cursor);
axes_t *add_to_list(axes_t *list, axes_t position);
axes_t *remove_from_list(axes_t *list, axes_t position);
void print_maze(case_t **maze, axes_t maze_size);
axes_t find_best_position(axes_t *cases, case_t **maze);
int is_it_the_start(axes_t cursor);
case_t **change_char_path(case_t **maze, axes_t maze_size);

#endif /* !solver */
