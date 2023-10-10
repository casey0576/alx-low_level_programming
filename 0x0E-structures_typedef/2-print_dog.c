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
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	printf("Age: %f\n", (d->age >= 0 ? d->age : -1.0));
	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
