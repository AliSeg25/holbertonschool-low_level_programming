#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: entier type int
 * @argv: pointeur type char
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
