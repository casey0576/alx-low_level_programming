#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node in a specified given index
 * @head: points to the head of listint_t node
 * @index: Index of the node to be deleted
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int count;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (count = 0; current != NULL && count < index - 1; count++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

