#include "main.h"
/**
 * print_to_98 - Prints natural numbers
 *
 * This function prints all natural numbers from n to 98.
 * @n: initial value
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			char j = 'i';


			while (j != '\0')
			{
				_putchar(
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			_putchar(i + '0');
			i--;
		}
	}
	_putchar('\n');
}
