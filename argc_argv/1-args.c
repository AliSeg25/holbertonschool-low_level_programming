#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: entier type int
 * @argv: pointeur type char
 * Return: (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc );
	return (0);
}
