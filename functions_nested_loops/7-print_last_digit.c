#include "main.h"

/**
 * print_last_digit - function
 * Return: returns last digit
 * @c: parameter
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}

