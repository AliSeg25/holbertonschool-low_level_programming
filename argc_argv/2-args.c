#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives.
 * @argc: entier type int
 * @argv: pointeur
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (int i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
