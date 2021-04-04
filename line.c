/*
** EPITECH PROJECT, 2020
** g
** File description:
** g
*/

#include "my.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

char *print_map(char *fd)
{
    int i = 0;
    char *buffer;
    int file = open(fd, O_RDONLY);
    struct stat sb;
    long size;

    stat(fd, &sb);
    size = sb.st_size;
    buffer = malloc(size);
    read(file, buffer, size);
    while (buffer[i] != '\0') {
        my_putchar(buffer[i]);
        i++;
    }
    return (buffer);
}
