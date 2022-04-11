#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 *
 * @str: string passed in the function
 *
 * Return: NULL or pointer to the string
 */

char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	str2 = malloc((i * sizeof(*str)) + 1);

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}


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

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	return (new_dog);
}
