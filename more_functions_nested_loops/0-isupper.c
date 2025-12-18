#include "main.h"

/**
 * _isupper - is upper
 * Return: 1 if is upper
 * @c: parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
