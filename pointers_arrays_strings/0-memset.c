#include "main.h"

/**
 * _memset - sets all bytes off s to b
 * @s: array
 * @b: effectively making every char b
 * @n: size of arra(in bytes)
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
