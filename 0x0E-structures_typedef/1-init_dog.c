#include "dog.h"
/**
 * init_dog - initialize a variable to type struct dog
 * @d: pointer to a struct dog
 * @name: string literal of tha name of the dog
 * @age: age of the dog in float
 * @owner: owner of the dog ( a char pointer)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
