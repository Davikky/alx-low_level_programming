#include "main.h"

/**
 * _isalpha - Checks if an argument is an alphabet
 *
 * @c: The argument
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char str = 'a';

	while (str <= 'z')
		{
		if (c == str || c >= 'A')
			{
			return (1);
		}
		str++;
	}
	return (0);
}
