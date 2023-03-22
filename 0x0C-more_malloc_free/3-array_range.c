#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return: if min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ar, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = min;
		min++;
	}

	return (ar);
}
