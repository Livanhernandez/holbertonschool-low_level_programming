#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - prints lenght of the list.
 * @h: variable in used.
 * Return: lenght of the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
