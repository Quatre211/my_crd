/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_strdup.c
** File description:
**      strdup
*/
#include "../my.h"

char *my_strdup(char *str)
{
    int i = my_strlen(str);
    char *dest = malloc(sizeof (char) * (i + 1));

    if (dest == NULL)
        return (NULL);
    dest = my_strcpy(dest, str);
    return (dest);
}
