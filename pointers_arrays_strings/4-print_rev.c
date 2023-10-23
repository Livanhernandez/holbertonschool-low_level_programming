#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: variable
 */

void print_rev(char *s)
{
	int i, l;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
