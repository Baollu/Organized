/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

int add(void *data, char **args)
{
    static int id = 0;
    int i = 0;
    int j = 0;
    stuff_t **stuff = data;

    if (args[0] == NULL || args[1] == NULL)
        return 84;
    for (j = 0; args[j] != NULL; j++);
    if (j % 2 != 0)
        return 84;
    while (args[i] != NULL){
        push_list(stuff, args[i], args[i + 1], id);
        mini_printf("%s n°%d - \"%s\" added.", (*stuff)->categorie,
                    (*stuff)->id, (*stuff)->name);
        my_putchar('\n');
        i += 2;
        id++;
    }
    return 0;
}

int del(void *data, char **args)
{
    stuff_t **list = data;
    int id = -1;
    int i = 0;

    if (args[0] == NULL)
        return 84;
    if (*list == NULL)
        return 84;
    while (args[i] != NULL){
        id = my_getnbr(args[i]);
        i++;
        delete_in_list(list, id, &compare_function);
    }
    return 0;
}

int sort(void *data, char **args)
{
    stuff_t **list = data;
    int i = 0;

    if (args[0] == NULL)
        return 84;
    while (args[i] != NULL){
        bubble_sort(list, args);
        i++;
    }
    return 0;
}

int disp(void *data, char **args)
{
    stuff_t **list = data;

    parcour_disp(*list);
    return 0;
}

int main(void)
{
    stuff_t *list = NULL;

    return workshop_shell(&list);
}
