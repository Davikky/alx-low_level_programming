#include "main.h"

/**
 * _sqrt - main search for natural square root
 *
 * @per_sq: perfect square prototype
 * @root: square root of perfect square
 * Return: root if per_sq is a perfect square, -1 otherwise.
 */

int _sqrt(int per_sq, int root)
{
	if ((root * root) == per_sq)
	{
		return (root);
	}
	if ((root * root) > per_sq)
	{
		return (-1);
	}
	return (_sqrt(per_sq, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: number provided
 * Return: natural square root - the natural square root of n, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, root));
}
