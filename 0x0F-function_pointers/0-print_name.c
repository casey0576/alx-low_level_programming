#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a given name
 * @name: prints a person's name
 * @f: prints a function
 * Return: always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
