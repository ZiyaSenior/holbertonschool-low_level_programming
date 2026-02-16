#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - entry point
 * @array: given array
 * @size: size of array
 * @action: pointer to function, takes an int arg
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
