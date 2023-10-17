#include "main.h"

/**
 * _islower - checks if a character is lowercase c
 *
 * Return: return 1 if the c is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
