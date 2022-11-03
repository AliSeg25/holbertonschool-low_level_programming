#include "3-calc.h"
/**
 * main - main
 * Description: main function
 * @argv: argv
 * @argc: argc
 * Return: (0)
 */
int main (int argc, char *argv[])
{
	int num1;
	int num2;
	int res;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = atoi(argv[2]);

	if (s == null)
	{
		printf("Error\n");
		exit(99);
	}


	result = get_op_func(s)(num1, num2);
	printf("%d\n", result);
	return (0);


}
