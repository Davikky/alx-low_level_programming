#include "main.h"

/**
 * _puts_recursion - Prints a string and followed by a new line
 *
 * @s: string provided
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
