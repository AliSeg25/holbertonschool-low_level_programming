#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
/** variable */
	int num = 0;
	char l;

	for (; num <= 9; num++)
		putchar((num % 10) + '0');
/** abc */
	for (l = 97; l <= 102; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
