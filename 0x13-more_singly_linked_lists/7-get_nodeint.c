#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Points to the head of linked list node
 * @index: index of node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *currnt = head;

	while (currnt != NULL)
	{
		if (count == index)
			return (currnt);

		currnt = currnt->next;
		count++;
	}
	return (NULL);
}
