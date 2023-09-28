#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of given size and assign with char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to the created array, NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
