#include "lists.h"

/**
 * print_listint - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head node of the linked list.
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
