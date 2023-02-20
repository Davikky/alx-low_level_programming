#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit
 *
 * This function prints the last digit of a
 * random number and further describes the digit
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	int n;

	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	printf("Last digit of %d is ", n);

	if (l > 5)
		{
		printf("%d and is greater than 5\n", l);
	}
	else if (l == 0)
		{
		printf("%d and is 0\n", l);
	}
	else if (l < 6)
		{
		printf("%d and is less than 6 and not 0\n", l);
	}

	return (0);
}
