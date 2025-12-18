#include "main.h"

/**
 * _strcmp - entry point
 * @s1: parameter
 * @s2: parameter
 * Return: returns result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			result += 0;
		else
		{
			result += (s1[i] - '0') - (s2[i] - '0');
			break;
		}
		i++;
	}
	return (result);
}
