#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - fonction qui imprime des nombres.
 * @n: nombres arguments
 * @separator: Imprimer ","
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;

va_start(arg, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");

va_end(arg);
}
