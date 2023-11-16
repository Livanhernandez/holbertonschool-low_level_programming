#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - function that prints strings
 * @separator: string
 * @n: parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else if (s != NULL)
		{
			printf("%s", s);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
