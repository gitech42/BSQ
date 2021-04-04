/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    bsq_t p;
    p = init_struct(p);
    bsq(av[1],p);
    return (0);
}
