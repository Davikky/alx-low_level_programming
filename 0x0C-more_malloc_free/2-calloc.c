#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: byte size of each array element
 *
 * Return: if nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	char *arr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	arr = ar;

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = '\0';

	return (arr);
}
