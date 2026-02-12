#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	if (argc == 1) /* no numbers given */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++) /* check each char */
		{
			if (!isdigit(argv[i][j])) /* non-digit found */
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]); /* convert and add */
	}

	printf("%d\n", sum); /* print total */
	return (0); /* end program */
}
