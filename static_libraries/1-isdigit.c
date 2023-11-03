#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if its a digit or not
 * @c: variable used
 * Return: 1 if c is a digit and 0 if its not
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
