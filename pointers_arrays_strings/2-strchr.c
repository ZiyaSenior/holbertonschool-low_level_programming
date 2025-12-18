#include "main.h"

/**
 * _strchr - returns first occurence of c in s
 * @s: string
 * @c: char
 * Return: c if found, null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
