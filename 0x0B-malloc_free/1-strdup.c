#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: input string
 * Return: success
 */

char *_strdup(char *str)
{
	char *ar;

	int j = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ar = malloc(sizeof(char) * (j + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
