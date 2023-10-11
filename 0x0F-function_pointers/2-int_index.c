#include "function_pointers.h"

/**
 * int_index - Returns the index where comparison holds true
 * @array: array to be printed
 * @size: size of the array
 * @cmp: pointer to comparison function.
 * Return: Index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
