#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node for a linked list
 * @head: ponits at thee first node
 * @n: inserts new data to node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
