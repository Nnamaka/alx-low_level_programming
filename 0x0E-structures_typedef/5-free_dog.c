#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free the memory of type struct dog
 * @d: pointer to struct dog type
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}