#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i < j)
	{
		r = -15;
	}
	else if (i == j)
	{
		r = 0;
	}
	else
	{
		r = 15;
	}
	return (r);
}
