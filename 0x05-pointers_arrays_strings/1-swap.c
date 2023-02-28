#include "main.h"

/**
 * swap_int - This function swaps integers.
 *
 * @a: first argument
 * @b: second argument
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	int q = *b;

	*a = q;
	*b = c;
}
