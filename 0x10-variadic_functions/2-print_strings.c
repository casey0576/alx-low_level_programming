#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string function
 * @separator: separatr the string function
 * @n: number of strings
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(st, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(st);
}
