#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: The size of the memory
 * Return: Returns a pointer on success and displays 98 on failure
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
