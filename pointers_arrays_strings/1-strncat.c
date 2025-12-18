#include "main.h"

/**
 * _strncat - appends n elements of src to dest
 * @dest: destination
 * @src: source
 * @n: count of appending elemnets
 *
 * Return: returns destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, k = 0;

	if (*(dest + i) == '\0' || *(src + i) == '\0')
		return (dest);
	while (dest[i] != '\0')
		i++;
	j = i;
	while ((j < i + n))
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	return (dest);
}
