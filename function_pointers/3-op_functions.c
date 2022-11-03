#include "3-calc.h"
/**
 *op_add - additionner deux nombres
 *
 *@a: premier nombre
 *@b: second nombre
 *
 * Return: le résultat de a + b;
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - soustraction
 *
 *@a: premier nombre
 *@b: second nombre
 *
 * Return: le résultat de a - b;
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *
 *@a: premier nombre
 *@b: second nombre
 *
 * Return: le résultat de a * b;
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division
 *
 *@a: premier nombre
 *@b: second nombre
 *
 * Return: le résultat de a / b;
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 *op_mod - Modulo
 *
 *@a: premier nombre
 *@b: second nombre
 *
 * Return: le résultat de a % b;
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
