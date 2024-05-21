/*
** EPITECH PROJECT, 2023
** dis
** File description:
** disp
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

void print_add(stuff_t **stuff)
{
    mini_printf("%s n°%d - \"%s\" added.", (*stuff)->categorie,
                (*stuff)->id, (*stuff)->name);
    my_putchar('\n');
}

void display_function(stuff_t *list)
{
    mini_printf("%s n°%d - \"%s\"", list->categorie,
                list->id, list->name);
    my_putchar('\n');
}

void parcour_disp(stuff_t *list)
{
    while (list != NULL){
        display_function(list);
        list = (list)->next;
    }
}
