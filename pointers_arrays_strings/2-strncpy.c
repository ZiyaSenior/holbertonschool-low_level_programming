#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy characters from src to dest until n or src ends */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* if src is shorter than n, fill the rest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
