#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: The name  to be printed
 * @f: function name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
