/*
** EPITECH PROJECT, 2023
** fonction
** File description:
** fonction
*/

#ifndef ORGA_H
    #define ORGA_H
    #include "struct.h"

void push_list(stuff_t **begin, char *name, char *categorie, int id);
int my_strlen(char const *str);
char *my_strdup(char const *src);
int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
char *my_strcpy(char *dest, char const *src);
void display_function(stuff_t **list);

#endif
