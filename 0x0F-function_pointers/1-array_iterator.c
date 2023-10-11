#include "function_pointers.h"

/**
 * array_iterator - creates a function of a perameter
 * @array: a given array
 * @size: the size of the array
 * @action: point to the function being used
 * Return: Always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < (int)  size; ++i)
		{
			action(array[i]);
		}
	}
}
