#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints array
 *
 * @a: array
 * @n: number of array elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			printf("\n");
		}
		else if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d\n", a[i]);
	}
}
