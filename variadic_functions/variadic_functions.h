#ifndef VARIADIC_FUNCTIONS_H_INCLUDED
#define VARIADIC_FUNCTIONS_H_INCLUDED
#include <stdarg.h>
/**
 * struct prin - structure pour 3-print_all
 * @p : lire les valeur
 * @f : fonction pointeur
 */
typedef struct prin
{
	char *p;
	void (*f)(va_list arg);

} prin_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H_INCLUDED*/
