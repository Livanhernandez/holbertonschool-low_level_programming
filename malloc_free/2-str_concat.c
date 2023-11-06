#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - write a function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length, s2_length, size, i = 0;
	char *concat;

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	size = s1_length + s2_length;

	concat = malloc((size + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1_length = 0;
	}
	if (s2 == NULL)
	{
		s2_length = 0;
	}
	while (*s1 != '\0')
	{
		concat[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		concat[i] = *s2;
		s2++;
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
