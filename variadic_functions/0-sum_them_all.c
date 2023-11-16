#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds everything.
 * @n: variable used
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int l = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (l < n)
		{
			sum += va_arg(args, int);
			l++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
