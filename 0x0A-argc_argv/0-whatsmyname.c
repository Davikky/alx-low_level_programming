#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count of array stings
 * @argv: array of pointers to strings; a Vector
 *
 * Return: Success
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
