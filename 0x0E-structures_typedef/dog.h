#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog features
 * @name: name of the dog
 * @age: how old is the dog
 * @owner: name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
