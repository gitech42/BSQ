/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "my.h"

void put_begin(bsq_t p)
{
    for (p.line = 0;
         p.square[p.line] != NULL; p.line++) {
        if (p.square[p.line][0] == 1 || p.square[p.line][0] == 'o')
            p.square[p.line][0] = 1;
        else
            p.square[p.line][0] = 2;
    }
    for (p.col = 0; p.square[0][p.col] != '\0'; p.col++) {
        if (p.square[0][p.col] == 'o')
            p.square[0][p.col] = 1;
        else
            p.square[0][p.col] = 2;
    }    
}

void search(bsq_t p)
{
    p.line = 1;
    p.col = 1;

    put_begin(p);
    while (p.square[p.line] != NULL) {
        for (p.col = 1; p.square[p.line][p.col] != '\0'; p.col++) {
            if (p.square[p.line][p.col] == 'o')
                p.square[p.line][p.col] = 1;
            else
                select_in_map(p);
        }
        p.line++;
    }
    get_big_square(p);
    replace(p);
    for (int i = 0; p.square[i] != NULL; i++) {
        my_putstr(p.square[i]);
        my_putchar('\n');
    }
    for (int i = 0; p.square[i] != NULL; i++)
        free(p.square[i]);
    free(p.square);
}
