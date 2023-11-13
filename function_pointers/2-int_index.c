#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare vlues
 * Return: depende of matching
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);

		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
