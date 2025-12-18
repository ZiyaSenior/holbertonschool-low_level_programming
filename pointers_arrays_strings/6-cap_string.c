#include "main.h"

/**
 * cap_string - capitalize strings in sentence
 * @s: string
 * Return: returns string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (s[i] != '\0' && !(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i] == '\0')
			break;
		if (i == 0 ||
			s[i - 1] == ' ' || s[i - 1] == '\t' ||
			s[i - 1] == '\n' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' ||
			s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}')
			s[i] -= 32;
		i++;
	}
	return (s);
}
