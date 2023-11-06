#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space memory.
 * @str: parameter
 * Return: on success the function returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (i + 1); j++)
	{
		s[j] = str[j];
	}
	return (s);
}
