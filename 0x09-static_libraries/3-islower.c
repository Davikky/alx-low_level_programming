#include "main.h"
/**
 * _islower - Function checks lowercase
 *
 * @c: is the argument passed to function
 *Return: 1 if lowercase and 0 otherwise.
 */
int _islower(int c)
{
	char low = 'a';

	while (low <= 'z')
		{
		if (low == c)
			{
			return (1);
		}
		low++;
	}
		return (0);
		{
		_putchar('\n');
		return (0);
	}
}
