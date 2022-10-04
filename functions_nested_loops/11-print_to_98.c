#include "main.h"
/**
 * main - task 11
 */
void print_to_98(int n)
{
	int n = 0;
	printf ("saisir un combre ");
	scanf ("%d", &n);

	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}

	return (0);
}
