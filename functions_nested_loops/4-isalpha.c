#include "main.h"

/**
 * _isalpha - describes value of c and returns 1
 *
 * @c: is a letter
 *
 * Return: 1 if c is lowercase or uppercase, if not, return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
