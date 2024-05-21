/*
** EPITECH PROJECT, 2023
** compare
** File description:
** swap
*/

#include "libshell/shell.h"
#include "include/struct.h"
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>

int compare_ascii(char *name, char *list_n)
{
    for (int i = 0; name[i] != '\0'; i++){
    if (name[i] < list_n[i])
        return 0;
    if (name[i] > list_n[i])
        return 1;
    }
    return 0;
}

int compare_ascii_ca(char *categorie, char *list_n)
{
    for (int i = 0; categorie[i] != '\0'; i++){
    if (categorie[i] < list_n[i])
        return 0;
    if (categorie[i] > list_n[i])
        return 1;
    }
    return 0;
}

int compare_id(int id, int list_n)
{
    if (id < list_n)
        return 0;
    if (id > list_n)
        return 1;
    return 0;
}
