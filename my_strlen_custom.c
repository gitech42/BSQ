/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "my.h"

int my_strlen_custom(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i);
}
