#include <stdio.h>
#include "main.h"

/**
 * times_table - 9 times table
 * Return: 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			e = a * b;
			c = e / 10;
			d = e % 10;
			if (e > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(e + '0');
			}
		}
		_putchar('\n');
	}
}
