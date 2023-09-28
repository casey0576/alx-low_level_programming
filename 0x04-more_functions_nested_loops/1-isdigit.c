#include "main.h"

/**
 * _isdigit - check if the  number is between 0 to 9.
 * @c: input char
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
