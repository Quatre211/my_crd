/*
** ETNA PROJECT, 04/11/2021 by sangou_b
** my.h
** File description:
**      include
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_s
{
    int key;
    char *value;
    struct linked_list_s *next;
} linked_list_t;

char **my_str_to_tab(char *str, char c);
int my_strlen(char *str);
char *my_strcpy(char *dest, char *str);
char *my_strdup(char *str);
linked_list_t *create_list(void);
void my_putchar(char c);
void my_putstr(char *str);
int my_count_line_tab(char **tab);
int my_getnbr(char *str);
linked_list_t *list_instruction(linked_list_t *list, char **tab);
int my_strlen(char *str);
void my_putnbr(int nb);
