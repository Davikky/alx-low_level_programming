#include "main.h"
/**
 * _abs - absolute value compute
 *
 * @a: The argument
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}
	return (0);
}
