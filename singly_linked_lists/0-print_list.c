#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of a list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
