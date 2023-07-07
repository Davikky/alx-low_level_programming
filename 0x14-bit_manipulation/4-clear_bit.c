#include "main.h"

/*
 * File: 4-clear_bit.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: integer provided
 * @index: index of reference
 * Return: 1 if SUCCESS;
 *		-1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
