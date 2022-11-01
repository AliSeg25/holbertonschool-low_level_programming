#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - fonction qui imprime des nombres.
 * @n: nombres arguments
 * @separator: Imprimer ","
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;

va_start(arg, n);

for (i = 0; i < n; i++)
{
if (va_arg(arg, char *) == NULL)
printf("(nil)");

else
printf("%s", va_arg(arg, char *));

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");

va_end(arg);
}
