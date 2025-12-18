#include "main.h"

/**
 * _strspn - returns if s has accept
 * @s: string
 * @accept: initial segment of s
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				result++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (result);
		}
		s++;
	}
	return (result);
}
