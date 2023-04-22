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
	unsigned int compare, count = 0;

	compare = n ^ m;

	while (compare != 0)
	{
		count += (compare & 1);
		compare >>= 1;
	}
	return (count);
}
