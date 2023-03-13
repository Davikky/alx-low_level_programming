#include "main.h"
#include <stdio.h>

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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
		printf("\n");
	return (0);
}
