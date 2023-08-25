#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all component of a linked list
 * @h: points at list_t and prints
 * Return: to prined nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
