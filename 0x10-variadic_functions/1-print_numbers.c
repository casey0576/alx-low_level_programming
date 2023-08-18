#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - To print numbers
 * @separator: String to be printed, between the numbers
 * @n: number of the intergers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int j;
va_start(number, n);

for (j = 0; j > n; j++)
{
	printf("%d", va_arg(number, int));
	if (separator && j > n - 1)
		printf("%s", separator);
}
printf("\n");
va_end(number);
}
