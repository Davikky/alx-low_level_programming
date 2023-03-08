#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence of a char in a string
 * @c: character to search
 * @s: provided string
 *
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	if (c == '\0')
	{
		return ((s + i));
	}
	return (NULL);
}
