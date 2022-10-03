#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - premier exercice
*/
int main(void)
{
	int m;
	int n;
	/* code */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	};

	return (0);
}
