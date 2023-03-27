#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a new type struct dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for stuct dog
 */
typedef struct dog dog_t;





#endif /* DOG_H */
