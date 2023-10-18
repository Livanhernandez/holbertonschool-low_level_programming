#include "main.h"

/**
 * jack_bauer - prints every minute, starting at 00:00 and ending at 23:59.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; minute <= 23; minute++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minute / 10) + '0');
			_putchar ((minute % 10) + '0');
			_putchar ('\n');
		}
	}
}
