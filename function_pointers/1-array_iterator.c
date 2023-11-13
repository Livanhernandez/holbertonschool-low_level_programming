#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -function that executes a function given
 *  as a parameter on each element of an array.
 *  @array: pointer
 *  @size: size of the array
 *  @action: pointer to function
 *  Return: {}
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*a)(int);

	if (array != NULL && action != NULL)
	{
		a = action;

		for (i = 0; i < size; i++)
			(*a)(array[i]);
	}
}
