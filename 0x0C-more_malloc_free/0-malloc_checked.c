#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  *
  * @b: size of memory to allocate
  *
  * Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
		exit(98);

	return (ar);
}
