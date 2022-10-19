#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: argument int
 * @argv: pointeur sur tableau
 * Return: (0) ou (1)
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}

	}
}
