#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Intialize a variable type of struct dog
 * @d: point the struct dog to int
 * @name: name int
 * @age: age of int
 * @owner: owner of int.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
