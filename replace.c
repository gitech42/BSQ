/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "my.h"

void replace(bsq_t p)
{
    int line = 0;
    int col = 0;

    while (p.square[line] != NULL) {
        for (col = 0; p.square[line][col] != '\0'; col++) {
            if (p.square[line][col] == 1)
                p.square[line][col] = 'o';
            else if (p.square[line][col] != 'x')
                p.square[line][col] = '.';
        }
        line++;
    }
}
