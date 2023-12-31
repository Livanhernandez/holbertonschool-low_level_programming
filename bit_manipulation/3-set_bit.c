#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: number
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	(*n |= (1 << index));
	return (1);
}
