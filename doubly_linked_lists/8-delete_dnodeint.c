#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node.
 * @head: pointer
 * @index: unsigned integer
 * Return: list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index > 0)
	{
		while ((counter < index) && temp)
		{
			temp = temp->next;
			counter++;
		}
		if (temp == NULL)
			return (-1);
		if (temp->next)
		{
			(temp->next)->prev = temp->prev;
			(temp->prev)->next = temp->next;
		}
		else
			(temp->prev)->next = NULL;
	}

	if (index == 0)
	{
		if (temp->next)
			(temp->next)->prev = NULL;
		*head = temp->next;
	}
	free(temp);
	return (1);
}	
