/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** create_list.c
** File description:
**      d
*/

#include "my.h"

linked_list_t *create_list(void)
{
    linked_list_t *list = malloc(sizeof(*list));

    list->key = 0;
    list->value = NULL;
    list->next = NULL;
    return (list);
}
