#include "main.h"

/**
 * factorial - factorial of n
 * @n: parameter
 * Return: -1 if n < 0; 1 if n == 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
