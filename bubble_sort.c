/*
** EPITECH PROJECT, 2023
** bubble
** File description:
** sort
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

void swap_time(stuff_t **list_p, stuff_t *next)
{
    stuff_t *list_n = next->next;

    next->next = (*list_p);
    (*list_p)->next = list_n;
    (*list_p) = next;
}

void swap(stuff_t **list_p)
{
    while ((*list_p)->next != NULL){
        if (compare_ascii((*list_p)->name, (*list_p)->next->name))
            swap_time((list_p), (*list_p)->next);
        if (compare_ascii_ca((*list_p)->categorie, (*list_p)->next->categorie))
            swap_time((list_p), (*list_p)->next);
        if (compare_id((*list_p)->id, (*list_p)->next->id))
            swap_time((list_p), (*list_p)->next);
        list_p = &(*list_p)->next;
    }
}

void bubble_sort(stuff_t **list, char **args)
{
    stuff_t **list_p = list;
    stuff_t *nb = *list;
    int j = 0;

    while (nb->next != NULL){
        nb = nb->next;
        j++;
    }
    for (; j > 0; j--)
        swap(list_p);
    return;
}
