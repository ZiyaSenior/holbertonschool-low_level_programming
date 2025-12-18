#include "main.h"

/**
 * _strcat - append to dest
 * @dest: destination
 * @src: source
 *
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while ((dest[i] = src[j]))
	{
		i++;
		j++;
	}
	return (dest);
}
