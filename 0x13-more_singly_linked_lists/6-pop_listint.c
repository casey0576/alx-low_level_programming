#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *  @head: Pointer points at the head of linked node
 *  Return: the data (n) of the deleted head node or 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
