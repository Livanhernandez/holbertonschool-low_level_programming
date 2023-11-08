#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for a array
 * @nmemb: elements of size
 * @size: parameter
 * Return: .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *n;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (size == sizeof(char))
	{
		a = malloc(nmemb * size);
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			a[i] = '0';
		}
		return (a);
	}
		else
		{
		n = malloc(nmemb * size);

		if (n == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			n[i] = 0;
		}
	}
		return (n);
}
