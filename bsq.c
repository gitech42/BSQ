/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** bsq
*/

#include "my.h"

char **map_in_tab(char *str, bsq_t p)
{
    int i = my_strlen_custom(str);
    int j = 0;
    int k = 0;
    int size = my_strlen(str);

    for (i = i + 1; i <= size; i++) {
        if (str[i] == '\n' && i != size){
            p.square[k][j] = '\0';
            j = 0;
            i++;
            k++;
        }
        p.square[k][j] = str[i];
        j++;
    }
    p.square[k + 1] = NULL;
    return (p.square);
}

int bsq(char *file, bsq_t p)
{
    int fd = open(file, O_RDONLY);
    struct stat sb;
    long size = 0;

    if (fd == -1)
        return (84);
    stat(file, &sb);
    size = sb.st_size;
    p.buff = malloc(size + sizeof(char));
    if (p.buff == NULL)
        return (84);
    read(fd, p.buff, size);
    close(fd);
    p.buff[size - 1] = '\0';
    p.square = my_malloc(p.buff, p);
    p.square = map_in_tab(p.buff, p);
    search(p);
    return (0);
}
