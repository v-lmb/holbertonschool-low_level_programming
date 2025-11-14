#include "main.h"
#include <stdlib.h>

/**
 *  _calloc - Entry point
 * @nmemb: number elements
 * @size: size each element
 * Return : pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
