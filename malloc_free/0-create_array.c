#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars
 * @size: specific size
 * @c: variable
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return ('\0');
	}
	i = 0;
	if (size == 0)
	{
		return ('\0');
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
