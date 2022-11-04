#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * prin_char - imprimer un entier
 * @arg: argument
 * Return: ()
 */
void prin_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * prin_int - imprimer un entier
 * @arg: argument
 * Return: ()
*/
void prin_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * prin_float - imprimer un float
 * @arg: argument
 * Return: ()
*/
void prin_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * prin_string - imprimer un string
 * @arg: argument
 * Return: ()
 */
void prin_string(va_list arg)
{
	char *varg;

	varg = va_arg(arg, char*);
	if (varg == NULL)
		printf("(nil)");

	printf("%s", varg);
}

/**
 * print_all - imprimer n'importe quoi.
 * @format: Le type
 * @...: nombre d 'argument
 */
void print_all(const char * const format, ...)
{
	prin_t apf[] = {
		{"c", prin_char},
		{"i", prin_int},
		{"f", prin_float},
		{"s", prin_string},
		{NULL, NULL}
		};

	va_list arg;
	int i = 0;
	int j = 0;
	char *esp = "";

	va_start(arg, format);

	while (format && format[i] != '\0') /*format = ceis utilisateur*/
	{
		while (apf[j].p)/*on parcoure le tableau de structure apf*/
		{
			if (*apf[j].p == format[i])/*on compare la valeur*/
			{

				printf("%s", esp);
				apf[j].f(arg);/*La on appel la bonne fonction*/
				esp = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(arg);
}
