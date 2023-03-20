#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 *
 * @size: size of array
 * @c: input char
 * Return: pointer to array, NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
