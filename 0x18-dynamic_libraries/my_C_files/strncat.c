#include "main.h"

/**
  * _strncat - This function concatenates two strings
  *
  * @dest: destination string
  * @src: source string
  * @n: truncates at n bytes
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
