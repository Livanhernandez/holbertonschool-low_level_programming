#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at a specific index.
 * @head: Pointer.
 * @index: unsigned integer.
 * Return: specific index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (count == index && head != NULL)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
