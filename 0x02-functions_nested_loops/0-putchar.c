#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @param i Initializes the loop
 * @param r Puts spell in order
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	char *r = "_putchar\n";

	while (i < 9)
		{
		_putchar(r[i]);
		i++;
	}
	return (0);
}
