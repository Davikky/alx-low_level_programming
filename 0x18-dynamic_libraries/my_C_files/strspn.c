#include "main.h"

/**
 * _strspn - computes length of initial segment of s
 *
 * @s: string to search in
 * @accept: bytes to search for
 *
 * Return: the number of bytes match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, check;

	count = 0;

	check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
				/* Break from here */
				break;
			}
		}
		if (check == 0)
		{
			return (count);
		}
	}
	return (count);
}
