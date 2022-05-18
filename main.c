/*
** ETNA PROJECT, 02/11/2021 by sangou_b
** main.c
** File description:
**      main function
*/
#include "my.h"

int count_line(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++);
    return (i);
}

void free_tab(char **tab)
{
    if (tab == NULL)
        return;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return;
}

int main(void)
{
    char *str = NULL;
    char *str_cpy;
    size_t size = 0;
    char **tab;
    linked_list_t *list = create_list();

    while (getline(&str, &size, stdin) != -1) {
        str_cpy = my_strdup(str);
        tab = my_str_to_tab(str, ' ');
        free(str_cpy);
        list = list_instruction(list, tab);
    }
    free_tab(tab);
}
