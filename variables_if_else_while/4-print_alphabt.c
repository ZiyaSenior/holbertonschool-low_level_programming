#include <stdio.h>

/**
 * main - prints letters exept of q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			letter++;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
