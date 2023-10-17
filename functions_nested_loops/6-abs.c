#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the value absolute of an integer
 *
 * @n: integer to work with
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
