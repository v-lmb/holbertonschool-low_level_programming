#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add node at the end
 * @head: head of str
 * @str: string of nodes
 * Return: a node at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	unsigned int size = 0;
	unsigned int i = 0;

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
	tmp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}
