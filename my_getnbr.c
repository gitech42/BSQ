/*
** EPITECH PROJECT, 2020
** EPITECH
** File description:
** GETNBR
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int symbol = 1;
    long res = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            symbol = symbol * (-1);
        if (str[i] >= 48 && str[i] <= 57)
            res = res * 10 + (str[i] - 48);
        if (str[i + 1] <= 48 || str[i + 1] >= 57)
            break;
    }
    res = res * symbol;
    if (res > 2147483647 || res < -2147483648)
        return (0);
    else {
        return (res);
    }
    return (0);
}
