#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next; /* move head to next node */
		if (*head != NULL)
			(*head)->prev = NULL; /* new head prev = NULL */
		free(current); /* free old head */
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next; /* link previous to next */
	if (current->next != NULL)
		current->next->prev = current->prev; /* link next to previous */

	free(current); /* free node */
	return (1);
}
