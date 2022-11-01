#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all -Écrivez une fonction renvoie la somme de tous sesparamètres.
 * @n: nombres arguments
 * Return: (0) ou (r)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int r = 0;
unsigned int i = 0;
va_list arg;

if (n == 0)
return (0);

va_start(arg, n);

for (i = 0; i < n; i++)
r += va_arg(arg, int);
va_end(arg);

return (r);

}
