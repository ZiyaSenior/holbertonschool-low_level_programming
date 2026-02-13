#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: parameter
 *
 * Return: returns arr
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
