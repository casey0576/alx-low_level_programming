#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated memory
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int i, w = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);
	if (new_size > old_size)
		w = old_size;
	for (i = 0; i < w; i++)
		pt[i] = old[i];
	free(ptr);
	return (pt);
}
