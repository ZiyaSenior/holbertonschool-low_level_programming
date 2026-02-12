#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* argv is unused */
	printf("%d\n", argc - 1);
	return (0);
}
