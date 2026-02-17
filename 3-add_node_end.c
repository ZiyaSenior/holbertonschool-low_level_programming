#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to head of the list
 * @str: string to add
 *
 * Return: address of new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	unsigned int len;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* strlen əvəzinə loop ilə uzunluğu hesabla */
	len = 0;
	while (new_node->str[len] != '\0')
		len++;
	new_node->len = len;

	new_node->next = NULL;

	if (!*head) /* list boşdursa */
	{
		*head = new_node;
		return (new_node);
	}

	/* Son node-u tap və onun next-inə bağla */
	last = *head;
	while (last->next)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
