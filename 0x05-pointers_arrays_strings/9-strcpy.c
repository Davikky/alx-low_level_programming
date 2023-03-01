#include "main.h"

/**
 * _strcpy - copies the string pointed
 *
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	return (dest);
}

