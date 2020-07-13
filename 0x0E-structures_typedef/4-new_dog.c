#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculate the lenght of a string
 * @s: string
 *
 * Return: lenght of the s string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}

/**
 * *_strcpy - copy string
 * @dest: array
 * @src: string to copy
 *
 * Return: String copied
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (1)
	{
		dest[c] = src[c];
		if (src[c] == '\0')
			break;
		c++;
	}
	return (dest);
}

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
		return (0);
	(*ptr).age = age;
	(*ptr).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*ptr).name == '\0')
	{
		free(ptr);
		return (0);
	}
	_strcpy((*ptr).name, name);
	(*ptr).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*ptr).owner == '\0')
	{
		free(ptr);
		free((*ptr).name);
		return (0);
	}
	_strcpy((*ptr).owner, owner);
	return (ptr);
}
