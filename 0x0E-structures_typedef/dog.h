#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog features
 * @name: the name of the dog
 * @age: how old is the dog
 * @owner: the name of the owner
 *
 * Description: The structure should define properties of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
