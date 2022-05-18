/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_count_line_tab.c
** File description:
**      d
*/
#include "../my.h"

int my_count_line_tab(char **tab)
{
    int line = 0;

    for (; tab[line] != NULL; line++);
    return (line);
}
