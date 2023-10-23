#include "main.h"

/**
 * swap_int - swaps value between 2 integers.
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
