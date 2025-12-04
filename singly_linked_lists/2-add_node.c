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
	unsigned int size = 0;
	unsigned int i = 0;

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
	while (str[i])
	{
		i++;
		size++;
	}

	new->len = size;
	new->next = *head;
	*head = new;
	return (new);
}
