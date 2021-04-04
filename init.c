/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** init
*/

#include "my.h"

bsq_t init_struct(bsq_t p)
{
    p.square = NULL;
    p.line = 0;
    p.col = 0;
    p.size = 0;
    p.hg = 0;
    p.h = 0;
    p.g = 0;
    return (p);
}
