#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: variable
 * Return: number of bytes form accept
 */
unsigned int _strspn(char *s, char  *accept)
{
	int  i, j, l;

	    l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
		return (l);
	}
	return (l);
}
