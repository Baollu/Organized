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
void display_function(stuff_t *list);
int check(char c);
int transform_into_nbr(char const *str, int start, int length, int neg);
int my_findnbr(char const *str, int i, int neg);
int my_getnbr(char const *str);
int compare_function(int data, int id);
void delete_in_list(stuff_t **begin, int id, int (*cmp_fct)());
void swap_time(stuff_t **list_p, stuff_t *next);
void bubble_sort(stuff_t **list, char **args);
void swap(stuff_t **list_p);
int compare_ascii(char *list, char *list_n);
void parcour_disp(stuff_t *list);
int compare_ascii_ca(char *categorie, char *list_n);
int compare_id(int id, int list_n);

#endif
