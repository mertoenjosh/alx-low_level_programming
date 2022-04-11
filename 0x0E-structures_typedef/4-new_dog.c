#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: NULL or dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	
	if (!new_dog)
		return (NULL);

	new_dog -> name = name;
	new_dog -> age = age;
	new_dog -> owner = owner;

	return (new_dog);
}
