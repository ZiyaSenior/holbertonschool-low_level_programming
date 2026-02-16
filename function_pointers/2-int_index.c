#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of searched integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function, compares integers. Has an int arg
 *
 * Return: index of searched integer, if not found returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
