#include "3-calc.h"
/**
 * main - This file should contain your main function only.
 * @argv: argv argument
 * @argc: argc nombre d'argument
 * Return: (0)
 */
int main(int argc, char *argv[])
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
	s = (argv[2]);

	if (s == NULL && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	res = get_op_func(s)(num1, num2);
	printf("%d\n", res);
	return (0);


}
