#include "main.h"

/**
  * _strcat - this function concatenates two strings
  *
  * @dest: destination string
  * @src: source string
  *
  * Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
