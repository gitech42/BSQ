/*
** EPITECH PROJECT, 2020
** EPITECH
** File description:
** PROJECT
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct bsq_s
{
    char **square;
    int hg;
    int h;
    int g;
    int size;
    int line;
    int col;
    char *buff;
} bsq_t;


int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char **my_malloc(char *str, bsq_t p);
char **map_in_tab(char *str, bsq_t p);
void put_begin(bsq_t p);
void select_in_map(bsq_t p);
void get_big_square(bsq_t p);
void search(bsq_t p);
int my_getnbr(char const *str);
void replace(bsq_t p);
int my_strlen_custom(char *str);
bsq_t init_struct(bsq_t p);
int bsq(char *file, bsq_t p);
int my_getnbr(char const *str);
int check_map(bsq_t p);
