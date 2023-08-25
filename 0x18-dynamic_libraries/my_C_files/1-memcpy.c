#include "main.h"

/**
 * _memcpy - copies n bytes from a source to a destination
 * @src: source
 * @dest: destination
 * @n: number of byte to copy
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
