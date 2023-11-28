#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - list of node.
 * @head: first element.
 * @str: string.
 * Return: number of node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory \n");
		exit(EXIT_FAILURE);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		fprintf(stderr, "Error: Unable to duplicate string\n");
		free(new_node);
		exit(EXIT_FAILURE);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
