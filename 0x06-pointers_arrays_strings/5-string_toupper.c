#include "main.h"

/**
  * string_toupper - Changes all lowercases to uppercase
  *
  * @p: input string
  *
  * Return: p value
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}

	return (p);
}
