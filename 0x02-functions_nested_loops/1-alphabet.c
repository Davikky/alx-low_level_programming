#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Entry point
*
* This is a designed function used to print alphabets
* in lowercase
*
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
	}
	_putchar('\n');
}
