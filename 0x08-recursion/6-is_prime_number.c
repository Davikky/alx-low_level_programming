#include "main.h"

/**
 * is_divide - Checks if a number is divisible.
 *
 * @N: dividend
 * @D: divisor.
 *
 * Return: 1(if N is prime), 0 otherwise
 */

int is_divide(int N, int D)
{
	if ((N % D == 0) && D > 1)
	{
		return (0);
	}
	if ((N % D) < D)
	{
		return (1);
	}
	return (is_divide(N, D + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: number provided
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int D = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (is_divide(n, D));
}
