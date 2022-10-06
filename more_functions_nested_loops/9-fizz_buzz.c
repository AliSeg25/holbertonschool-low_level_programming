#include <stdio.h>
/**
 * main - The “Fizz-Buzz test” is an view question designed to help filte
 *
 * Return: (0)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz ");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz ");
		else if (a % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");
	return (0);
}
