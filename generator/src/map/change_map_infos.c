/*
** EPITECH PROJECT, 2023
** change map infos
** File description:
** it check all to create walls if it can
*/

#include "generator.h"

int change_map_infos(structured_map_t **map, gen_cursor_t *cursor)
{
    if (check_up_map_infos(map, cursor) == SUCCESS)
        put_wall_up(map, cursor);
    if (check_down_map_infos(map, cursor) == SUCCESS)
        put_wall_down(map, cursor);
    if (check_right_map_infos(map, cursor) == SUCCESS)
        put_wall_right(map, cursor);
    if (check_left_map_infos(map, cursor) == SUCCESS) {
        put_wall_left(map, cursor);
    }
    return FAILURE;
}
