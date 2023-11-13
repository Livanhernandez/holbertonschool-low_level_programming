#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *print_name - print name
 *@name: name
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
	}
	else
	{
	void (*a)(char *);

	a = f;

	(*a)(name);
	}
}
