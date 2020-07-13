#include "dog.h"

/**
 * init_dog - init a dog struct type.
 * @d: struct dog type
 * @name: pet's name
 * @age: pet's age
 * @owner: owner's pet
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
