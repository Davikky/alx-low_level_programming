#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: input string 1
 * @s2: input string 2
 * Return: success
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;

	int j = 0, k = 0, i, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	ar = malloc(sizeof(char) * (j + k + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ar[i] = s1[i];
	}
	for (m = 0; i < (j + k); m++)
	{
		ar[i] = s2[m];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
