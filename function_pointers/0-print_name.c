#include "function_pointers.h"
/**
* print_name - Imprimer un nom
* @name: string a imprime
* @f: function pointe
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
