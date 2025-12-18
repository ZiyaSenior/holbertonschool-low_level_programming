#include <stdio.h>

/**
 * main - print all combination of two digits
 * Return: 0 if successful
 */

int main(void)
{
	int i, m, n;

	for (i = 1; i < 90; i++)
	{
		if (i % 10 == 0)
			i += i / 10 + 1;
		m = i / 10;
		n = i % 10;
		putchar(m + '0');
		putchar(n + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
