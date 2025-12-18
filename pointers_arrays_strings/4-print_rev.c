#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len - 1;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
