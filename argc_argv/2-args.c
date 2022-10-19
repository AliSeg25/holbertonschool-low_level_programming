#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives.
 * @argc: entier type int
 * @argv: pointeur
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	//int i = 0;

	for (; *argv != '\0'; argv++)
	{
		printf("%s\n", argv);
	}
	return (0);
}
