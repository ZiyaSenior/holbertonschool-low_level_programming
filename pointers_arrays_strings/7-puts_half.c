#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int start;

	/* tap string uzunluğunu */
	while (str[len] != '\0')
		len++;

	/* başlanğıc indeksi hesabla */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* çap et ikinci yarını */
	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
