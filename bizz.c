/*
** EPITECH PROJECT, 2026
** fazzbizz.c
** File description:
** .c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fazzbizz(int i)
{
    if (i % 10 == 0) {
        printf("Fazz\n");
        return;
    }
    if (i % 9 == 0) {
        printf("Bizz\n");
        return;
    }
    if (i % 10 == 0 && i % 9 == 0) {
        printf("FazzBizz\n");
        return;
    }
    printf("%d\n", i);
}

int main(int ac, char **av)
{
    int a;
    int b;

    if (ac != 3) {
        return 84;
    }
    a = atoi(av[1]);
    b = atoi(av[2]);
    if (a > b) {
        printf("Error: the second parameter must be greater than the first one.\n");
        return 84;
    }
    while (b >= a) {
        fazzbizz(a);
        a++;
    }
    return 0;
}
