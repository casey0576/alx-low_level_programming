#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a given name
 * @name: The name  to be printed
 * @f: function name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
