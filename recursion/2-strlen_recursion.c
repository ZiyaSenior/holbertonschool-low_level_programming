#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s += 1;
		i = 1;
		i += _strlen_recursion(s);
	}
	return (i);
}
