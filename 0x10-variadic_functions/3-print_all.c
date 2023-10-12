#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *se = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", se, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", se, st);
					break;
				default:
					i++;
					continue;
			}
			se = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
