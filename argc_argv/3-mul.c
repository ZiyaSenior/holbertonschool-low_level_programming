#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success, 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3) /* check for correct number of arguments */
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]); /* convert first argument to int */
	b = atoi(argv[2]); /* convert second argument to int */
	result = a * b;    /* multiply numbers */

	printf("%d\n", result); /* print result */
	return (0); /* end program */
}
