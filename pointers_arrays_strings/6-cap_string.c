#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* iterate through each character */
	while (str[i] != '\0')
	{
		/* capitalize first character of the string */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');

		/* check if the previous character is a separator */
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		     str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		     str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}') &&
		    (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}
