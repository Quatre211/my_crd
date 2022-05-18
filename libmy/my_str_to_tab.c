/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_str_to_tab
** File description:
**      m
*/
#include "../my.h"

int is_sep(char str_pos, char c)
{
    if (str_pos != c && str_pos != '\0')
        return (0);
    else
        return (1);
}

int my_count_word(char *str, char c)
{
    int w = 1;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            w++;
    return (w);
}

char **my_str_to_tab(char *str, char c)
{
    int w = my_count_word(str, c);
    char **tab = malloc (sizeof (char *) * (w + 1));
    int co = 0;
    int pos = 0;
    int pos2 = 0;
    int pos3 = 0;

    for (int l = 0; l != w; l++) {
        co = 0;
        for (;is_sep(str[pos], c) == 0; co++, pos++);
        tab[l] = malloc (sizeof (char) * (co + 1));
        for (;is_sep(str[pos3], c) == 0; pos3++, pos2++)
            tab[l][pos2] = str[pos3];
        tab[l][pos2] = '\0';
        pos2 = 0;
        pos++;
        pos3++;
        }
    tab[w] = NULL;
    return (tab);
}
