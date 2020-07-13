#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	(*ptr).age = age;

	(*ptr).name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*ptr).name == '\0')
		return ('\0');
	strcpy((*ptr).name, name);
	(*ptr).owner = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*ptr).owner == '\0')
		return ('\0');
	strcpy((*ptr).owner, owner);
	return (ptr);
}
