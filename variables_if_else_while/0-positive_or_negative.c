#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Entry point
 *
*Return: Always (0) Success
 */
int main(void)
{
	int n;
	\n
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
