#include "main.h"

/**
 * _islower - checks if a character is lowercase c
 *
 * @c: value of the letter c
 *
 * Return: returns 1 if letter c is lowercase, if not, returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
