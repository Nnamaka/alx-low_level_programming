#include "main.h"
/**
 * _strcpy - copy from source to destination
 * @dest: char pointer argument of the destination string
 * @src: char pointer argument of the source string
 * Return: returns 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i); i++)
		;

	for (j = 0; j <= i; j++)
		*(dest + j) = *(src + j);

	return (dest);
}
