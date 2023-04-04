/*
 * File: 5-free_dog.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a struct
 * @d: input struct
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
