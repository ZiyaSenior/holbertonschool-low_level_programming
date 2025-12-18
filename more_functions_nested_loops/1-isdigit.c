#include "main.h"

/**
 * _isdigit - entry point
 * Return: 1 if is digit
 * @c: parameter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
