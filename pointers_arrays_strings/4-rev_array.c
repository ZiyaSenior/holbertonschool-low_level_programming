#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: parameter
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = j;
		n--;
	}

}
