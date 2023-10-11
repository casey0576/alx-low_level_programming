#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
