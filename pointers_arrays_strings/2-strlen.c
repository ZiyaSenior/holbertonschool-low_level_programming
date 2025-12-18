#include "main.h"

/**
 * _strlen - length of string
 * Return: returns the length of string
 * @s: parameter
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
	{
		len++;
	}
	return (len);
}
