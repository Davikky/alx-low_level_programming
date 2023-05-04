#include "main.h"

/*
 * File: 5-flip_bits.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * flip_bits - checks number of bits to flip
 * @n: first integer provided
 * @m: second integer provided
 * Return: value of count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;

	while (mask)
	{
		count += (mask & 1);

		mask >>= 1;
	}
	return (count);
}
