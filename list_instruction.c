/*
** ETNA PROJECT, 03/11/2021 by sangou_b
** list_instruction.c
** File description:
**      list instruction
*/
#include "my.h"

void print_node(linked_list_t *list, int key)
{
    linked_list_t *tmp = list;

    while (tmp != NULL) {
        if (tmp->key == key) {
            my_putstr(tmp->value);
            return;
        }
        tmp = tmp->next;
    }
    my_putstr("-1\n");
    return;
}

linked_list_t* delete_node(linked_list_t* list, int valeur)
{
    linked_list_t *tmp;
    linked_list_t *previous = list;

    if (previous == NULL) {
        my_putstr("-1\n");
        return(list);
    }
    if (previous->key == valeur) {
        my_putstr(previous->value);
        my_putchar('\n');
        list = previous->next;
        free(previous);
        return (list);
    }
    tmp = previous->next;
    for (; tmp != NULL; previous = tmp, tmp = tmp->next) {
        if (tmp->key == valeur) {
            my_putstr(tmp->value);
            my_putchar('\n');
            previous->next = tmp->next;
            free(tmp);
            return (list);
        }
    }
    my_putstr("-1\n");
    return (list);
}

linked_list_t *create_node(linked_list_t *list, int key, char *value)
{
    linked_list_t *tmp = list;
    linked_list_t *node;

    while (tmp != NULL) {
        if (tmp->key = key) {
            tmp->value = value;
            my_putnbr(tmp->key);
            my_putchar('\n');
            return (list);
        }
        tmp = tmp->next;
    }
    node = malloc(sizeof(*node));
    node->key = key;
    node->value = value;
    node->next = list;
    my_putnbr(key);
    my_putchar('\n');
    return (list);
}

linked_list_t *list_instruction(linked_list_t *list, char **tab)
{
    int key = my_getnbr(tab[0]);
    int line = my_count_line_tab(tab);

    if (line == 1)
        print_node(list, key);
    else if (line == 2) {
        if (tab[1][0] == 'D')
            list = delete_node(list, key);
        else
            list = create_node(list, my_getnbr(tab[0]), tab[1]);
    }
    return (list);
}
