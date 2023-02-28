#include "main.h"

/**
 * rev_string - rwverses string
 *
 * @s: String provided
 * Return: void
 */

void rev_string(char *s)
{
	char c;

	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		i--;
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
