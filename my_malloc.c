/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** bsq
*/

#include "my.h"

char **my_malloc(char *str, bsq_t p)
{
    int backn = my_strlen_custom(str);

    p.line = my_getnbr(str);
    if (p.line == 1)
        p.col = backn;
    else
        p.col = backn + 1;
    while (str[p.col] != '\n')
        p.col++;
    p.col = p.col - backn;
    p.square = malloc(sizeof(char *) * (p.line + 1));
    for (int i = 0; i < p.line; i++)
        p.square[i] = malloc(sizeof(char) * (p.col + 1));
    return (p.square);
}
