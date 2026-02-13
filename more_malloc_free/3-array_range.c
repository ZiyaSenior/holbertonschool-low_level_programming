#include "main.h"
#include <stdlib.h>

/**
 * array_range - range of two integers
 * @min: parameter 1
 * @max: parameter 2
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *arr, arr_size, i;

	if (min > max)
		return (NULL);
	arr_size = max - min + 1;
	arr = malloc(arr_size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
