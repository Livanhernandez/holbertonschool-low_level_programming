#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatanates two strings
 * @s1: first string
 * @s2: second string
 * @n: parameter
 * Return: if the function fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len_s1, len_s2, i;

	if (s1 == NULL)
	{
		len_s1 = 0;
	}
	else
	{
		len_s1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len_s2 = 0;
	}
	else
	{
		len_s2 = strlen(s2);
	}
	if (n >= len_s2)
	{
		n = len_s2;
	}

	a = malloc((len_s1 + n + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i + len_s1] = s2[i];
	}
	a[i + len_s1] = '\0';
	return (a);
}
