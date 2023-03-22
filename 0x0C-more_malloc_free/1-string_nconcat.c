#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: NULL if function fails
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++){
		ar[len] = s1[i];
		len++;
	}

	for (i = 0; s2[i] && i < n; i++){
		ar[len] = s2[i];
		len++;
	}

	ar[len] = '\0';

	return (ar);
}
