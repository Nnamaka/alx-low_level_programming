#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to char string
 * Return: returns nothing
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;

	return (i);
}
