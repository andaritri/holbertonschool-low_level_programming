#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: pointer to new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == '\0')
		return ('\0');
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	return (ptr);
}
