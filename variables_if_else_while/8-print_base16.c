#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)

{
	char abc;
	int nb = 0;

	for (nb = '0'; nb <= '9'; nb++)
		putchar(nb);
	for (abc = 'a'; abc <= 'f'; abc++)
		putchar(abc);

	putchar('\n');

	return (0);

}
