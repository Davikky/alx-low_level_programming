#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @param i Initializes the loop
 * @param r Assigns the string to be printed
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	char *r = "_putchar\n";

	while (r[i] != '\0')
		{
		_putchar(r[i]);
		i++;
	}
	return (0);
}
