/*
** EPITECH PROJECT, 2023
** delete
** File description:
** list
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

int compare_function(int data, int id)
{
    if (data == id)
        return 1;
    return 0;
}

void delete_first_list(stuff_t **begin, int id, int (*cmp_fct)())
{
    stuff_t *list = *begin;
    stuff_t *temp = (*begin)->next;

    if (cmp_fct((*begin)->id, id) == 1){
        mini_printf("%s n°%d - \"%s\" deleted.\n", (*begin)->categorie,
                    (*begin)->id, (*begin)->name);
        temp = (*begin)->next;
        free(*begin);
        *begin = temp;
    }
}

void delete_in_list(stuff_t **begin, int id, int (*cmp_fct)())
{
    stuff_t *list = *begin;
    stuff_t *temp = (*begin)->next;

    while (list->next != NULL){
        if (cmp_fct(list->next->id, id) == 1){
            mini_printf("%s n°%d - \"%s\" deleted.\n", list->next->categorie,
                        list->next->id, list->next->name);
            temp = list->next->next;
            free(list->next);
            list->next = temp;
        } else {
            list = list->next;
        }
    }
    delete_first_list(begin, id, &compare_function);
}
