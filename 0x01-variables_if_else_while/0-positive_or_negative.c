#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random int and tells sign
 *
 * This function outputs a random integer and tells
 * whether it is positive, zero or negative
 *
 * Return: Always returns 0.
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes in there */

	if (n > 0)
		{
		printf("%d is positive\n", n);
	}
	else
		{
		if (n < 0)
			{
			printf("%d is negative\n", n);
		}
		else
			{
			printf("%d is zero\n", n);
		}
	}
	return (0);
}
