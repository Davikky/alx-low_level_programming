#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  *
  * @a: array of integers
  * @n: number of elements to swap
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int *r, i, aux, k;

	r = a;

	for (i = 1; i < n; i++)
	{
		r++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *r;
		*r = aux;
		r--;
	}
}
