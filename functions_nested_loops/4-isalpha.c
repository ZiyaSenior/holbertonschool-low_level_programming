#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Returns if c is alpha or not
 * Return: 1 if c is alpha
 * @c: parameter
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
