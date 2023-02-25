#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - tests the sign of an integer
 *
 * This function outputs an input integer and tells
 * whether it is positive, zero or negative
 *
 * @i: input integer
 * Return: void
 */
void positive_or_negative(int i)
{
	/* my code goes in there */
	if (i > 0)
		{
		printf("%d is positive\n", i);
	}
	else
		{
		if (i < 0)
			{
			printf("%d is negative\n", i);
		}
		else
			{
			printf("%d is zero\n", i);
		}
	}
}
