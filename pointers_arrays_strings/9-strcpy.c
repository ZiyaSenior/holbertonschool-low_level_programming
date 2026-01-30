#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0'; /* son \0-ı da əlavə et */

	return (dest);
}
