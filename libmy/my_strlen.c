/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_strlen.c
** File description:
**      return the size of the string
*/

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
