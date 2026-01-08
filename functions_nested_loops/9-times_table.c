#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)          /* outer loop for each row */
	{
		for (j = 0; j <= 9; j++)      /* inner loop for each column */
		{
			result = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');   /* extra space for alignment */
			}

			if (result >= 10)          /* print tens digit first */
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0'); /* print units digit */
		}
		_putchar('\n');                 /* move to next row */
	}
}
