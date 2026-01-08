#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');   /* tens digit of the hour */
			_putchar((hour % 10) + '0');   /* units digit of the hour */
			_putchar(':');                  /* colon separator */
			_putchar((minute / 10) + '0'); /* tens digit of the minute */
			_putchar((minute % 10) + '0'); /* units digit of the minute */
			_putchar('\n');                 /* move to a new line */
		}
	}
}
