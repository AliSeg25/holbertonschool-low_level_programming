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
	int i = 0;
	char *str;
	char type; /*la variable contenir le type de format de [i]*/

	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		type = format[i];

		switch (type)

		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;

		case 'i':
			printf("%d", va_arg(arg, int));
			break;

		case 'f':
			printf("%f", va_arg(arg, double));
			break;

		case 's':
			str = va_arg(arg, char*);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);
			break;

		}

		if ((type == 'c' || type == 'i' || type == 's' || type == 'f')
		    && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
