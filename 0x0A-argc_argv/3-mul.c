#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: count of array stings
 * @argv: array of pointers to strings; a Vector
 *
 * Return: Success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	return (0);
	}
	else
		printf("Error\n");
	return (1);
}
