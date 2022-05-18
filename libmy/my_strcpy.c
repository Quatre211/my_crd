/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_strcpy.c
** File description:
**      copy
*/

int my_strlen(char *str);

char *my_strcpy(char *dest, char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i != size; i++)
        dest[i] = str[i];
    dest[size] = '\0';
    return (dest);
}
