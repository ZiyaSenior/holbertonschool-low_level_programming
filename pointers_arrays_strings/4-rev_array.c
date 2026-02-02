#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	/* swap elements from both ends moving to the center */
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
