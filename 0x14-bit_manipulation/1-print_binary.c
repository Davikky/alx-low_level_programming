#include "main.h"

/*
 * File: 1-print_binary.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * print_binary - prints a number as binary
 * @n: number provided
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
