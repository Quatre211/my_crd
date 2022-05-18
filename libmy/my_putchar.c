/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** my_putchar.c
** File description:
**      write a character
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
