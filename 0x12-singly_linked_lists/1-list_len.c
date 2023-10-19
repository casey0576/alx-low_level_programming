#include "lists.h"

/**
 * list_len - get number printed nodes
 * @h: points at list_t and prints
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
