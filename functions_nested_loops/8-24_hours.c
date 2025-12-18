#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 * Return: minutes of day
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == 2 && b >= 4)
				continue;
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar((a % 10) + '0');
					_putchar((b % 10) + '0');
					_putchar(':');
					_putchar((c % 10) + '0');
					_putchar((d % 10) + '0');
					_putchar('\n');
				}
			}
		}
	}
}
