#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char abc;

	while (times++ <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)

	_putchar (abc);
	_putchar ('\n');
	}
}
