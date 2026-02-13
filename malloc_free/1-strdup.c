#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *           containing a copy of the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}
