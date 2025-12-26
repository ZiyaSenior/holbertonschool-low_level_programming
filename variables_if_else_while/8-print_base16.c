#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
