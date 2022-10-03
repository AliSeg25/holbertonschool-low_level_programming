#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
/** de 0 a 9 */
	int num = 0;

	for (; num <= 9; num++)
		putchar((num % 10) + '0');
/** abc */
	char l;

	for (l = 97; l <= 102; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
