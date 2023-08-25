#include "main.h"

/**
 * _strlen - Length of str
 *
 * @s: String provided
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len++);
}
