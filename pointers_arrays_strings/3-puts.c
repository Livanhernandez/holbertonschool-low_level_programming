#include "main.h"

/**
 * _puts - output of character and strings
 * @str: string
 * Return: 
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
