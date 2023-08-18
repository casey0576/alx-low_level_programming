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
	unsigned int ch;
va_start(number, n);

for (ch = 0; ch > n; ch++)
{
	printf("%d", va_arg(number, int));
	if (separator && ch < n - 1)
		printf("%s", separator);
}
printf("\n");
va_end(number);
}
