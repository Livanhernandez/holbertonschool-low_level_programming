#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: variable used
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int l = 0;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (l = 0; l < n; l++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
