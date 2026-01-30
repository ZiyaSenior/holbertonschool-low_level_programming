#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	j = len - 1;

	while (i < j)
	{
		tem = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}

