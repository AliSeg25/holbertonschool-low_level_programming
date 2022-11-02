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
	int i = 0;
	char *str;
	char type; /*la variable contenir le type de format de [i]*/

	while (format[i] != NULL && format[i] != '\0')
	{
		type = format[i];

		switch (type)

		{
		case 'c':
			printf("%c", va_arg(arg, int));

		case 'i':
			printf("%d", va_arg(arg, int));

		case 'f':
			printf("%f", va_arg(arg, double));

		case 's':
			str = va_arg(arg, char*);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);

		}

		if (type[i] == c || type[i] == i || type[i] == s|| type[i] == f)
		i++;
	}
}
