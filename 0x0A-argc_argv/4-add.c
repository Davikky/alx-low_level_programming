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
	int i;
	unsigned int k, sum = 0;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];

			for (k = 0; str[k] != '\0'; k++)
			{
				if (str[k] < 48 || str[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(str);
			str++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
