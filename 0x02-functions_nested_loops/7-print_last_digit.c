#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: The argument
 * This function prints the last digit of an integer n
 * Return: last digit of integer n
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = (-1 * a);
	}

	_putchar(a + '0');
	return (a);
}
