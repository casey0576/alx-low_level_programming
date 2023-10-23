#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a function of all list
 * @h: linked list to be printed
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
