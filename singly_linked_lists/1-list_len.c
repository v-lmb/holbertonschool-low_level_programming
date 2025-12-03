#include <stdio.h>
#include "lists.h"

/**
 * list_len - count numbers of node in a sigly linked list
 * @h: head pointer
 * Return: number of elements linked
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
