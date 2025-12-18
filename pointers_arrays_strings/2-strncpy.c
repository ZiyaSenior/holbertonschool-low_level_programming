#include "main.h"

/**
 * _strncpy - copies string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: size of copied string
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
