#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
/**déclaration variable */
	int num = 0;

/**début instruction */
	for (; num <= 9; num++)
{
		putchar((num % 10) + '0');
		if (num != 9)
{

/**espace virgule*/
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
