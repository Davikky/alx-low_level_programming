#include "main.h"
#include <stdlib.h>

/*
 * File: 0-binary_to_uint.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number provided as pointer to char
 * Return: Converted number; 0 if b contains a non-bit or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		num += b[i] - '0';
	}

	return (num);
}
