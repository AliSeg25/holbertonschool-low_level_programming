#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc: nombre argument
 * @argv: pointeur
 * Return: (0) ou (1)
 */
int main(int argc, char *argv[])
{
    int i, j, r;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    i = atoi(argv[1]);
    j = atoi(argv[2]);
    r = i * j;
    printf("%d\n", r);
    return (0);
}
