#include "main.h"

/**
 * _puts - prints string to stout
 *
 * @str: String provided
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
