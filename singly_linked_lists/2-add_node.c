#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - new node at the beginning of a list
 * @str: string of nodes
 * @head: head of str
 * Return: the address of new element, or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
