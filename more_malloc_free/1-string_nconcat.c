#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of first bytes of s2
 *
 * Return: returns concatenated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len = 0, index = 0, size = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*arr);
	arr = malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	while (index < size && s1[index] != '\0')
	{
		arr[index] = s1[index];
		index++;
	}

	while (index < size && s2[j] != '\0')
	{
		arr[index] = s2[j];
		index++;
		j++;
	}
	arr[index] = '\0';
	return (arr);
}
