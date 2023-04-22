#include "main.h"
#include <stdio.h>

/*
 * File: 100-get_endianness.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

/**
 * get_endiannes - checks the endianness
 * Return: void
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *) &num;
	return (*ptr == 1);
}

