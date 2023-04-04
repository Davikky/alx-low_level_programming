/*
 * File: 4-new_dog.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - counts the length of an input string pointed to by str
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string using pointer to string
 * @out: string to be copied
 * @in: where to copy string to
 * Return: pointer to string 'in'
 */

char *_strcopy(char *in, char *out)
{
	int i;

	for (i = 0; out[i]; i++)
		in[i] = out[i];

	in[i] = '\0';
	return (in);
}

/**
 * new_dog - creates a new dog using struct dog defined as dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	(*dog1).name = _strcopy(dog1->name, name);
	(*dog1).age = age;
	(*dog1).owner = _strcopy(dog1->owner, owner);
	return (dog1);
}
