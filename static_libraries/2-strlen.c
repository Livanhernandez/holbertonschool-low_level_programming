#include "main.h"

/**
 * _strlen - calculate the lenght of a string
 * @s: integer used
 * Return: returns the lenght of the string
 */

int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
