#include "main.h"
/**
 * _isupper - checks if argument ia uppercase
 *
 * @c: input parameter
 * Return: Always 0
 */

int _isupper(int c)
{
	char upp = c;

	if (upp >= 'A')
	{
		if (upp <= 'Z')
		{
			return (1);
		}
	}
	else if (upp >= 'a')
	{
		if (upp <= 'z')
		{
			return (0);
		}
	}
	return (0);
}
