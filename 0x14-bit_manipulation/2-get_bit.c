#include "main.h"

/*
 * File: 2-get_bit.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * get_bit - checks value of a bit at a given index
 * @n: integer provided
 * @index: index to be checked
 * Return: 0(1) if the bit at specified index is 0(1);
 *		-1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
