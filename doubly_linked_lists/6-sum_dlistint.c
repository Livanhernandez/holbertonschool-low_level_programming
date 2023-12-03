#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all elements.
 * @head: Pointer.
 * Return: sum of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
