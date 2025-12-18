#include <stdio.h>
#include "main.h"

/**
 * print_array - entry point
 * @a: parameter
 * @n: parameter
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
	}
	printf("%d", a[n - 1]);
	putchar('\n');
}
