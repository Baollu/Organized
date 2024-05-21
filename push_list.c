/*
** EPITECH PROJECT, 2023
** pushlist
** File description:
** pushlist
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

void push_list(stuff_t **begin, char *categorie, char *name, int id)
{
    stuff_t *list = malloc(sizeof(stuff_t));

    list->name = my_strdup(name);
    list->categorie = my_strdup(categorie);
    list->id = id;
    list->next = *begin;
    *begin = list;
    return;
}
