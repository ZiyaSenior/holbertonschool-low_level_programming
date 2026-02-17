#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to add
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	if (str == NULL)
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

	/* strlen əvəzinə loop ilə uzunluğu hesablayırıq */
	len = 0;
	while (new_node->str[len] != '\0')
		len++;
	new_node->len = len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
