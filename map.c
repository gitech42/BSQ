/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "my.h"

void select_in_map(bsq_t p)
{
    p.hg = p.square[p.line - 1][p.col - 1];
    p.h = p.square[p.line - 1][p.col];
    p.g = p.square[p.line][p.col - 1];

    if (p.g <= p.hg && p.g <= p.h)
        p.square[p.line][p.col] = p.g + 1;
    if (p.hg <= p.h && p.hg <= p.g)
        p.square[p.line][p.col] = p.hg + 1;
    if (p.h <= p.hg && p.h <= p.g)
        p.square[p.line][p.col] = p.h + 1;
}

void get_big_square(bsq_t p)
{
    int line = 0;
    int col = 0;
    int stocky = 0;
    int stockx = 0;

    p.size = 0;
    while (p.square[line] != NULL) {
        for (col = 0; p.square[line][col] != '\0'; col++) {
            if (p.size < p.square[line][col]) {
                p.size = p.square[line][col];
                stocky = line;
                stockx = col;
            }
        }
        line++;
    }
    for (line = stocky - (p.size - 2); line <= stocky; line++)
        for (col = stockx - (p.size - 2); col <= stockx; col++)
            p.square[line][col] = 'x';
}
