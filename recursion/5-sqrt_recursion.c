#include "main.h"

/**
 * helper- helper function of _sqrt_recursion
 * @n: number
 * @i: multiplier
 * Return: i if i is square root of n, -1 if not succecful
 */

int helper(int n, int i)
{
	if (i <= n)
	{
		if ((n / i == i) && (n % i == 0))
			return (i);
		else
			return (helper(n, i + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - square root of n
 * @n: parameter
 * Return: 0 if successful
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0)
		return (-1);
	else
		return (helper(n, i));
}
