#include "3-calc.h"
/**
 * main - main
 * Description: main function
 * @argv: argv
 * @argc: argc
 * Return: (0)
 */
int void (int argc, char *argv[])
{
	int num1;
	int num2;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(agrv[1]);
	num2 = atoi(agrv[3]);
	op = get_op_func(argv[2]);

	if (op == null)
	{
		printf("Error\n");
		exit(99);
	}


	res = op(num1, num2);
	printf("%d", res);

	return (0);


}
