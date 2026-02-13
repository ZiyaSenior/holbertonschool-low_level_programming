#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and sett it to zero
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pointer to allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, arr_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	arr = malloc(arr_size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < arr_size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
