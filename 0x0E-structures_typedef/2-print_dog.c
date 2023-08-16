#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct
 * @d: struct prints dog
 * return: NULL
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name: (nil)\n");
	if (d->owner == NULL)
		printf("owner:(nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
