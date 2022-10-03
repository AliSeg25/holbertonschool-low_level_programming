#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
	char abc;

	for (abc = 122; abc >= 97; abc--)
		putchar(abc);
	putchar('\n');
	return (0);
}
