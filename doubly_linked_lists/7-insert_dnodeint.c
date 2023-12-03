#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a specific index.
 * @h: Pointer.
 * @idx: unsigned integer.
 * @n: integer.
 * Return: index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *temp;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL)
	{
		return (NULL);
	}
	temp = *h;

	while (temp != NULL && count < idx -1)
	{
		temp = temp->next;
		count++;
	}
	if (count == idx - 1 && temp != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->prev = temp;
		new_node->next = temp->next;

		if (temp->next != NULL)
		{
			temp->next->prev = new_node;
		}
		temp->next = new_node;

		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
