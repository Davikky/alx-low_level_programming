#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
			return (NULL);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	ar = malloc(sizeof(*ptr_copy) * new_size);
	if (ar == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = ar;
	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;
	free(ptr);
	return (ar);
}
