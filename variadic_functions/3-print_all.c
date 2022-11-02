#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - imprimer n'importe quoi.
 * @format: Le type
 * @...: nombre d 'argument
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	va_start(arg, format);
	char type; /*la variable contenir le type de format de [i]*/

	while (format[i] != NUll)
	{
		type = format[i];

		switch (type)

		{
		case c:
			printf("%c", va_arg(arg, int));

		case i:
			printf("%d", va_arg(arg, int));

		case s:
			str = va_arg(arg, c*)
			printf("%s", str);

		case f:
			printf("%f", va_arg(arg, double));


		}

		i++;
	}
}
