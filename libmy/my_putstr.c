/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_putstr.c
** File description:
**      print a string of character
*/
#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
