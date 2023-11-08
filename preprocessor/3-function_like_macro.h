#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: Parameter
 * @max: parameter
 * Return: the pointer
 */
int *array_range(int min, int max)
{
	int *a, i, j;

	if (min > max)
	{
		return (NULL);
	}
	if (min == max)
	{
		j = 1;
	}
	else
	{
		j = max - min;
	}
	if (min == 0)
	{
		j++;
	}
	a = malloc(sizeof(int) * j);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
