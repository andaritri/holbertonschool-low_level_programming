#ifndef HEADER_H
#define HEADER_H
/**
 * struct dog - create dog stuct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
#endif
