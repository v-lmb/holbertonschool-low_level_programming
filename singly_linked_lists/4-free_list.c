#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer first node
 * Return: freedom
 */

void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
