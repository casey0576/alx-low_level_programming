#include "main.h"

/**
 * _print_rev_recursion - Prints string that reverse.
 * @s: The string to be printed.
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
