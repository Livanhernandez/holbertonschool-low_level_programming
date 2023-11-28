#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list.
 * @h: variable used
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[");

	if (h->str != NULL)
		printf("%u] %s\n", h->len, h->str);
	else
		printf("0] (nil)\n");

	h = h->next;
	count++;
	}
	return (count);
}
